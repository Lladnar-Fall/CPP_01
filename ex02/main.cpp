#include <iostream>

int main(void)
{
    std::string intro = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &intro;
    std::string &stringREF = intro;

    std::cout << "The memory addresses" << std::endl;
    std::cout << "intro: " << &intro << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;
    std::cout << "\n";

    std::cout << "The values" << std::endl;
    std::cout << "intro: " << intro << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;
    return (0);
}