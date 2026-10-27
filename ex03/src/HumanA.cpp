#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &inven) : name(name), inven(inven)
{
}

void HumanA::attack()
{
    std::cout << this->name << "attacks with their" << inven.getType() << std::endl;
}