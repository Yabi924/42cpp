#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("unknow"), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "\033[31mClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name): Name(_name),HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "\033[31mClapTrap [" << _name << "] Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "\033[31mClapTrap Copy constructor called\033[0m" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "\033[31mClapTrap Copy assignment operator called\033[0m" << std::endl;
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
    std::cout << "\033[31mClapTrap destructor called\033[0m" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->HitPoint == 0)
    {
        std::cout << "\033[31mClapTrap " << this->Name << " HP=";
        std::cout << this->HitPoint << " can't attack!\033[0m" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << "\033[31mClapTrap " << this->Name << " not enough energy point!\033[0m" << std::endl;
        return ;
    }
    this->EnergyPoint--;
    std::cout << "\033[31mClapTrap " << this->Name << " attacks " << target;
    std::cout << ", causing " << this->AttackDamage << " points of damage!\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoint == 0)
    {
        std::cout << "\033[31m" << this->Name << " HP=" << this->HitPoint;
        std::cout << " can't TakeDamage!\033[0m" << std::endl;
        return ;
    }
    if (amount > this->HitPoint)
        this->HitPoint = 0;
    else
        this->HitPoint -= amount;
    std::cout << "\033[31mClapTrap " << this->Name << " Take Damage " << amount;
    std::cout << "!Now HP=" << this->HitPoint << "\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint == 0)
    {
        std::cout << "\033[31mClapTrap " << this->Name << " HP=";
        std::cout << this->HitPoint << " can't beRepaired!\033[0m" << std::endl;
        return ;
    }
    if (this->EnergyPoint == 0)
    {
        std::cout << "\033[31mClapTrap " << this->Name << " not enough anergy points!\033[0m" << std::endl;
        return ;
    }
    this->EnergyPoint--;
    this->HitPoint += amount;
    std::cout << "\033[31mClapTrap " << this->Name << " regains " << amount;
    std::cout << "HP.Now HP=" << this->HitPoint << "\033[0m" << std::endl;
}