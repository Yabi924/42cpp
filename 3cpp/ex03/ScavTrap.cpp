#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "\033[4;34mScavTrap Default constructor called\033[0m" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    std::cout << "\033[4;34mScavTrap Copy constructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name): ClapTrap(_name)
{
    std::cout << "\033[4;34mScavTrap [" << _name << "] Name constructor called\033[0m" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[4;34mScavTrap Destructor called\033[0m" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "\033[4;34mScavTrap is now in Gate keeper mode.\033[0m" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "\033[4;34mScavTrap Copy assignment operator called\033[0m" << std::endl;
    if (this == &other)
        return (*this);
    this->Name = other.Name;
    this->HitPoint = other.HitPoint;
    this->AttackDamage = other.AttackDamage;
    this->EnergyPoint = other.EnergyPoint;
    return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->HitPoint == 0)
    {
        std::cout << "\033[4;34mScavTrap " << this->Name << " HP=";
        std::cout << this->HitPoint << " can't attack!\033[0m" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << "\033[4;34mScavTrap " << this->Name << " not enough energy point!\033[0m" << std::endl;
        return ;
    }
    this->EnergyPoint--;
    std::cout << "\033[4;34mScavTrap " << this->Name << " attacks " << target;
    std::cout << ", causing " << this->AttackDamage << " points of damage!\033[0m" << std::endl;
}