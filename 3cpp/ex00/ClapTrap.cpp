#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("unknow"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name): Name(_name),HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->HitPoint = other.HitPoint;
    this->EnergyPoint = other.EnergyPoint;
    this->AttackDamage = other.AttackDamage;
    if (other.Name.size() != 0)
        this->Name = other.Name;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->HitPoint == 0)
    {
        std::cout << this->Name << " HP=" << this->HitPoint << " can't attack!" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << this->Name << " not enough energy point!" << std::endl;
        return ;
    }
    this->EnergyPoint--;
    std::cout << "ClapTrap " << this->Name << " attacks " << target;
    std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoint == 0)
    {
        std::cout << this->Name << " HP=" << this->HitPoint << " can't TakeDamage!" << std::endl;
        return ;
    }
    if (amount > this->HitPoint)
        this->HitPoint = 0;
    else
        this->HitPoint -= amount;
    std::cout << this->Name << " Take Damage " << amount << "!";
    std::cout << "Now HP=" << this->HitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint == 0)
    {
        std::cout << this->Name << " HP=" << this->HitPoint << " can't beRepaired!" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << this->Name << " not enough anergy points!" << std::endl;
    }
    this->EnergyPoint--;
    this->HitPoint += amount;
    std::cout << this->Name << " regains " << amount << "HP.Now HP=" << this->HitPoint << std::endl;
}