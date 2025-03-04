#ifndef CT_HPP
# define CT_HPP

# include <string>
# include <iostream>

class ClapTrap
{

private:
    std::string Name;
    unsigned int HitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;

public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif