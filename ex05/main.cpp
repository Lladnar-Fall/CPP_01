#include "Harl.hpp"

int main(void)
{
    Harl harl;

    std::cout << "Testing DEBUG"<< std::endl;
    harl.complain("DEBUG");

    std::cout << "\nTesting INFO" << std::endl;
    harl.complain("INFO");

    std::cout << "\n Testing WARNING" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n Testing ERROR" << std::endl;
    harl.complain("ERROR");

    std::cout << "\nTesting INVALID level" << std::endl;
    harl.complain("UNKNOWN");

    return (0);
}