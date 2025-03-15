#include "FlagTrap.hpp"

FlagTrap::FlagTrap(): ClapTrap()
{   
    std::cout << "\033[4;35mFlagTrap Default constructor called\033[0m" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FlagTrap::FlagTrap(const FlagTrap &other): ClapTrap(other)
{
    std::cout << "\033[4;35mFlagTrap Copy constructor called\033[0m" << std::endl;
}

FlagTrap::FlagTrap(const std::string &_name): ClapTrap(_name)
{
    std::cout << "\033[4;35mFlagTrap Name constructor called\033[0m" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FlagTrap::~FlagTrap()
{   
    std::cout << "\033[4;35mFlagTrap Detructor called\033[0m" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other)
{
    std::cout << "\033[4;35mFlagTrap Copy assignment operator called\033[0m" << std::endl;
    if (this == &other)
        return (*this);
    this->Name = other.Name;
    this->HitPoint = other.HitPoint;
    this->EnergyPoint = other.EnergyPoint;
    this->AttackDamage = other.AttackDamage;
    return (*this);
}

void FlagTrap::highFiveGuys(void)
{
    std::cout << "\033[4;35mFlagTrap " << this->Name << " have a highfive request!:D\033[0m" << std::endl;
}
