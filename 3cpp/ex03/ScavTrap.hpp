#ifndef ST_HPP
# define ST_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{

private:

public:
    ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap(const std::string &_name);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &other);

    void attack(const std::string &target);

    void guardGate(void);
};

#endif