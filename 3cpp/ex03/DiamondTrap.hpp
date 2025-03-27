#ifndef DT_HPP
# define DT_HPP

# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap: public ScavTrap, public FlagTrap
{
private:
    str Name;

public:
    DiamondTrap();
    DiamondTrap(const str &_Name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);

    void whoAmI(void);
};

#endif