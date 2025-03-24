#ifndef WATER_HPP
# define WATER_HPP

# include "AMateria.hpp"

class Water: public AMateria
{
public:
    Water();
    ~Water();

    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif