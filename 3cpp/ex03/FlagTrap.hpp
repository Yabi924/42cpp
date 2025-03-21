#ifndef FT_HPP
# define FT_HPP

# include "ClapTrap.hpp"

class FlagTrap: virtual public ClapTrap
{

public:
    FlagTrap();
    FlagTrap(const std::string &_name);
    FlagTrap(const FlagTrap &other);
    ~FlagTrap();

    FlagTrap &operator=(const FlagTrap &other);

    void highFiveGuys(void);
};



#endif