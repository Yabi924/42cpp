#ifndef CT_HPP
# define CT_HPP

# include <string>
# include <iostream>

typedef std::string str;

#define RED    "\033[0;31m"
#define GREEN  "\033[0;32m"
#define YELLOW "\033[33m"
#define BLUE   "\033[34m"
#define RESET  "\033[0m"
#define RESETEND  "\033[0m" << std::endl

class ClapTrap
{
protected:
    str Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;

public:
    ClapTrap();
    ClapTrap(const str &_Name);
    ClapTrap(const ClapTrap &other);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &other);

    void attack(const str &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif