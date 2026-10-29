#include "Zombie.hpp"

int main(void)
{
    std::cout << "Testing newZombie (1st Zombie)" << std::endl;
    Zombie* Jerry = newZombie("Jerry");
    Jerry->announce();
    delete Jerry;

    std::cout << "\n Testing randomChump (2nd zombie) " << std::endl;
    randomChump("Gary");

    return (0);
}