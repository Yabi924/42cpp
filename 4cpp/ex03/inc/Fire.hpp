#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire: public AMateria
{

public:
    Fire();
    ~Fire();

    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif