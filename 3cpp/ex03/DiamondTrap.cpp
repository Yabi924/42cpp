#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FlagTrap()
{
    std::cout << BLUE << "DiamondTrap Default constructor called" << RESETEND;
    Name = "unknow";
    ClapTrap::Name = Name + "_clap_name";
    HitPoints = FlagTrap::HitPoints;
    EnergyPoints = 50;
    AttackDamage = FlagTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FlagTrap(other)
{
    std::cout << BLUE << "DiamondTrap Copy constructor called" << RESETEND;
    *this = other;
}

DiamondTrap::DiamondTrap(const str &_Name): ClapTrap(_Name), ScavTrap(_Name), FlagTrap(_Name)
{
    std::cout << BLUE << "DiamondTrap Name constructor called ->" << _Name << RESETEND;
    Name = _Name;
    ClapTrap::Name = Name + "_clap_name";
    HitPoints = FlagTrap::HitPoints;
    EnergyPoints = 50;
    AttackDamage = FlagTrap::AttackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BLUE << "DiamondTrap Destructor called" << RESETEND;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this == &other)
        return (*this);
    ClapTrap::Name = other.Name + "_clap_name";
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;

    return (*this);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "WhoAmI->ClapTrap: " << ClapTrap::Name << ", DiamondTrap: " << this->Name << std::endl;
}