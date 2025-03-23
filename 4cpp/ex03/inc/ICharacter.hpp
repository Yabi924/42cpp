#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class AMateria;

# include "string"
# include "iostream"

class ICharacter
{
protected:
    std::string Name;
    AMateria *skill[4];
    AMateria *unequipSkill[100];
    int skillCount;
    int uskillCount;

public:
    ICharacter(const std::string &_Name);
    virtual ~ICharacter();

    virtual const std::string &getName(void) const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;

};

#endif