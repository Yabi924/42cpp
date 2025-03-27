#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("unknow"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << GREEN << "ClapTrap Default constructor called" << RESETEND;
}

ClapTrap::ClapTrap(const str &_Name): Name(_Name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << GREEN << "ClapTrap Name constructor called" << RESETEND;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << GREEN << "ClapTrap Copy constructor called" << RESETEND;
    *this = other;
}

ClapTrap::~ClapTrap()
{
    std::cout << GREEN << "ClapTrap Destructor called" << RESETEND;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this == &other)
        return (*this);
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;

    return (*this);
}

void ClapTrap::attack(const str &target)
{
    if (this->HitPoints == 0)
    {
        std::cout << GREEN << "ClapTrap attack: " << this->Name << " is dead!" << RESETEND;
        return ;
    }
    else if (this->EnergyPoints == 0)
    {
        std::cout << GREEN << "ClapTrap attack: No enough Energy Points!" << RESETEND;
        return ;
    }
    this->EnergyPoints--;
    std::cout << GREEN << "ClapTrap " << this->Name << " attacks " << target << ", causing ";
    std::cout << this->AttackDamage << " points of damage!" << RESETEND;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoints == 0)
    {
        std::cout << GREEN << "ClapTrap beRepaired: " << this->Name << " is dead!" << RESETEND;
        return ;
    }
    else if (this->EnergyPoints == 0)
    {
        std::cout << GREEN << "ClapTrap beRepaired: No enough Energy Points!" << RESETEND;
        return ;
    }
    this->EnergyPoints--;
    this->HitPoints += amount;
    std::cout << GREEN << "ClapTrap " << this->Name << " be repaired->" << amount;
    std::cout  << ". Now HP: " << this->HitPoints << RESETEND;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints == 0)
    {
        std::cout << GREEN << "ClapTrap takeDamage: " << this->Name << " is dead!" << RESETEND;
        return ;
    }
    if (this->HitPoints < amount)
        this->HitPoints = 0;
    else
        this->HitPoints -= amount;
    std::cout << GREEN << "ClapTrap " << this->Name << " take damage->" << amount;
    std::cout << ". Now HP: " << this->HitPoints << RESETEND;
}

