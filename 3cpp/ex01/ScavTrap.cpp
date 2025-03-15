#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name): ClapTrap(_name)
{
    std::cout << "ScavTrap Name constructor called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
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
        std::cout << "Scavtrap " << this->Name << " HP=";
        std::cout << this->HitPoint << " can't attack!" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << "Scavtrap " << this->Name << " not enough energy point!" << std::endl;
        return ;
    }
    this->EnergyPoint--;
    std::cout << "Scavtrap " << this->Name << " attacks " << target;
    std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}