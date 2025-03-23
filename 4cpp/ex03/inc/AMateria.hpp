#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "rpg.hpp"

class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    AMateria(const std::string &_type);
    virtual ~AMateria();

    const std::string &getType(void) const;

    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target);
};

#endif