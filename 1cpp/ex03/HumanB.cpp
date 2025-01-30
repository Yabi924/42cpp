#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    weapon = NULL;
}

void HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void HumanB::attack(void)
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has not weapon!" << std::endl;
}
