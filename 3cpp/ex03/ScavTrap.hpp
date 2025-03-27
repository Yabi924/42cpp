#ifndef ST_HPP
# define ST_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const str &_Name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &other);

    void guardGate(void);
    void attack(const str &target);
};

#endif