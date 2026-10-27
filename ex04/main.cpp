#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

std::string replace_string(std::string line, const std::string &s1, const std::string &s2)
{
    int s1len = s1.length();
    int s2len = s2.length();

    size_t pos = line.find(s1);
    while (pos != std::string::npos)
    {
        line.erase(pos, s1len);
        line.insert(pos, s2);
        pos = line.find(s1, pos + s2len);
    }
    return (line);
}

int main(int ac, char **av)
{
    
    if (ac != 4)
    {
        std::cout << "Format: ./sed filename string1 string2" << std::endl;
        return (1);
    }
    std::ifstream infile;
    std::ofstream outfile;
    std::string line;

    std::string filename = av[1];
    std::string str1 = av[2];
    std::string str2 = av[3];

    infile.open(filename.c_str());
    if (!infile.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return (1);
    }
    std::string outre = filename + ".replace";
    outfile.open(outre.c_str(), std::ios::out | std::ios::trunc);
    if (!outfile.is_open())
    {
        std::cerr << "Error: could not create/open " << filename << ".replace" << std::endl;
        infile.close();
        return (1);
    }
    while (getline(infile, line))
    {
        line = replace_string(line, str1, str2);
        outfile << line << "\n";
        if (!infile.eof())
            outfile << std::endl;
    }
    outfile.close();
    infile.close();
    return (0);
}