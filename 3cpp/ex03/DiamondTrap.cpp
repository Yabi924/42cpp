#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FlagTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->Name = "unknow";
    ClapTrap::Name.append("_clap_name");
    this->HitPoint = FlagTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FlagTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const std::string &_name): ClapTrap(_name + "_clap_name"), ScavTrap(_name), FlagTrap(_name)
{
    std::cout << "DiamondTrap [" << _name << "] Name constructor called" << std::endl;
    this->Name = _name;
    this->HitPoint = FlagTrap::HitPoint;
    this->EnergyPoint = 50;
    this->AttackDamage = FlagTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FlagTrap(other)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->Name = other.Name;
    ClapTrap::Name = other.ClapTrap::Name;
    this->HitPoint = other.HitPoint;
    this->EnergyPoint = other.EnergyPoint;
    this->AttackDamage = other.AttackDamage;
    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "ClapTrap: " << ClapTrap::Name << ", DiamondTrap: " << this->Name << std::endl;
}
