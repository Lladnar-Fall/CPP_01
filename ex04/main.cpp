#include <iostream>
#include <fstream>
#include <string>

std::string replace_string(std::string line, const std::string &s1, const std::string &s2)
{
    if (s1.empty())
        return line;

    size_t s1len = s1.length();
    size_t s2len = s2.length();
    size_t pos = line.find(s1);

    while (pos != std::string::npos)
    {
        line.erase(pos, s1len);
        line.insert(pos, s2);
        pos = line.find(s1, pos + s2len);
    }
    return line;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty() || filename.empty())
    {
        std::cerr << "Error: s1 or filename cannot be empty" << std::endl;
        return (1);
    }

    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open input file " << filename << std::endl;
        return (1);
    }

    std::string outfilename = filename + ".replace";
    std::ofstream outfile(outfilename.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not create output file " << outfilename << std::endl;
        infile.close();
        return (1);
    }

    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replace_string(line, s1, s2);
        if (!infile.eof())
            outfile << "\n";
    }

    infile.close();
    outfile.close();
    return (0);
}