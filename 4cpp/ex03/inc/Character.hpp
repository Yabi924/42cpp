#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
private:
    std::string Name;
    AMateria *skill[4];
    AMateria *unequipSkill[100];
    int skillCount;
    int uskillCount;

public:
    Character(const std::string &_Name);
    Character(const Character &other);
    Character(const ICharacter &other);
    ~Character();

    Character &operator=(const Character &other);
    Character &operator=(const ICharacter &other);

    const std::string &getName(void) const;
    int getSkillCount(void) const;
    int get_uSkillCount(void) const;
    AMateria *getSkill(int i) const;
    AMateria *getuSkill(int i) const;

    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    
    void skillTable(std::string type) const;
};

#endif