#include "Zombie.hpp"

Zombie::Zombie() : name(" ")
{
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}


Zombie::~Zombie(void)
{
    std::cout << this->name << "I'm dyinggg..." << std::endl;
}