#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
    std::cout << YELLOW << "FlagTrap Default constructor called" << RESETEND;
    Name = "unknow";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FlagTrap::FlagTrap(const str &_Name)
{
    std::cout << YELLOW << "FlagTrap Name constructor called ->" << _Name << RESETEND;
    Name = _Name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FlagTrap::FlagTrap(const FlagTrap &other)
{
    std::cout << YELLOW << "FlagTrap Copy constructor called" << RESETEND;
    *this = other;
}

FlagTrap::~FlagTrap()
{
    std::cout << YELLOW << "FlagTrap Destructor called" << RESETEND;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other)
{
    if (this == &other)
        return (*this);
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;

    return (*this);
}

void FlagTrap::highFiveGuys(void)
{
    if (this->HitPoints != 0)
        std::cout << YELLOW << "FlagTrap " << this->Name << " have a highfive request!:D" << RESETEND;
    else
        std::cout << YELLOW << "FlagTrap highFiveGuys: " << this->Name << " is dead!" << RESETEND;
}