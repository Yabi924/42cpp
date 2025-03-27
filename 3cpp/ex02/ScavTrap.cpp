#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << RED << "ScavTrap Default constructor called" << RESETEND;
    Name = "unknow";
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const str &_Name): ClapTrap(_Name)
{
    std::cout << RED << "ScavTrap Name constructor called" << RESETEND;
    Name = _Name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    std::cout << RED << "ScavTrap Copy constructor called" << RESETEND;
    *this = other;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap Destructor called" << RESETEND;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this == &other)
        return (*this);
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;

    return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << RED << "ScavTrap now is Gate keeper mode." << RESETEND;
}

void ScavTrap::attack(const str &target)
{
    if (this->HitPoints == 0)
    {
        std::cout << RED << "ScavTrap attack: " << this->Name << " is dead!" << RESETEND;
        return ;
    }
    else if (this->EnergyPoints == 0)
    {
        std::cout << RED << "ScavTrap attack: No enough Energy Points!" << RESETEND;
        return ;
    }
    this->EnergyPoints--;
    std::cout << RED << "ScavTrap " << this->Name << " attacks " << target << ", causing ";
    std::cout << this->AttackDamage << " points of damage!" << RESETEND;
}
