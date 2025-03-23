#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character
{
public:
    Character(const std::string &_Name);
    ~Character();

    const std::string &getName(void) const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif