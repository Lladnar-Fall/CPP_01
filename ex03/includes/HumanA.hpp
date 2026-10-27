#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string name;
        Weapon inven;
    public:
        HumanA(std::string name, Weapon &inven);
        void attack();
};

#endif