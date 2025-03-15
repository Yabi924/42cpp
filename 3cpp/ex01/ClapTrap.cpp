#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("unknow"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name): Name(_name),HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
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
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->HitPoint == 0)
    {
        std::cout << "ClapTrap " << this->Name << " HP=";
        std::cout << this->HitPoint << " can't attack!" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << "ClapTrap " << this->Name << " not enough energy point!" << std::endl;
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
        std::cout << this->Name << " HP=" << this->HitPoint;
        std::cout << " can't TakeDamage!" << std::endl;
        return ;
    }
    if (amount > this->HitPoint)
        this->HitPoint = 0;
    else
        this->HitPoint -= amount;
    std::cout << "ClapTrap " << this->Name << " Take Damage " << amount;
    std::cout << "!Now HP=" << this->HitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint == 0)
    {
        std::cout << "ClapTrap " << this->Name << " HP=";
        std::cout << this->HitPoint << " can't beRepaired!" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << "ClapTrap " << this->Name << " not enough anergy points!" << std::endl;
    }
    this->EnergyPoint--;
    this->HitPoint += amount;
    std::cout << "ClapTrap " << this->Name << " regains " << amount;
    std::cout << "HP.Now HP=" << this->HitPoint << std::endl;
}