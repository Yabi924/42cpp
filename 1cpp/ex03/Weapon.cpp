#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

std::string Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string set)
{
    type = set;
}
