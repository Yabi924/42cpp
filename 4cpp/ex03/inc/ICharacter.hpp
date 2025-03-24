#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class AMateria;

# include "string"
# include "iostream"

class ICharacter
{
public:
    virtual ~ICharacter();

    virtual const std::string &getName(void) const = 0;
    virtual int getSkillCount(void) const = 0;
    virtual int get_uSkillCount(void) const = 0;
    virtual AMateria *getSkill(int i) const = 0;
    virtual AMateria *getuSkill(int i) const = 0;

    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;

};

#endif