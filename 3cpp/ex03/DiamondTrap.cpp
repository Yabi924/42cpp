#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FlagTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    this->Name = "unknow";
    ClapTrap::Name = this->Name + "_clap_name";
    this->HitPoint = FlagTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FlagTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const std::string &_name): ScavTrap(_name), FlagTrap(_name)
{
    std::cout << "DiamondTrap Name constructor called" << std::endl;
    this->Name = _name;
    ClapTrap::Name = _name + "_clap_name";
    this->HitPoint = FlagTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FlagTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), FlagTrap(other), ScavTrap(other)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = other;
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
}