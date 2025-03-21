#ifndef DT_HPP
# define DT_HPP

# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap: public ScavTrap, public FlagTrap
{
private:
    std::string Name;

public:
    DiamondTrap();
    DiamondTrap(const std::string &_name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);

    void whoAmI(void);
};

#endif