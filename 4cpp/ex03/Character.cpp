#include "inc/Character.hpp"

Character::Character(const std::string &_Name): ICharacter(_Name)
{
    Name = _Name;
    skillCount = 0;
    uskillCount = 0;
    for (int i = 0; i < 4; i++)
        skill[i] = NULL;
    for (int i = 0; i < 100; i++)
        unequipSkill[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < skillCount; i++)
        delete skill[i];
    for (int i = 0; i < uskillCount; i++)
        delete unequipSkill[i];
}

const std::string &Character::getName(void) const
{
    return (this->Name);
}

void Character::equip(AMateria *m)
{
    if (skillCount != 4)
        skill[skillCount++] = m;
    else
        std::cout << "Max skill" << std::endl;
    //show skill table
}

void Character::unequip(int idx)
{
    if (!skill[idx])
    {
        std::cout << "Empty index!" << std::endl;
        return ;
    }

    std::cout << this->Name << ": Unequip " << skill[idx]->getType() << std::endl;

    unequipSkill[uskillCount++] = skill[idx];
    skill[idx] = NULL;
    skillCount--;

    for (int i = 0; i < 3; i++)
    {
        if (!skill[i] && skill[i + 1])
        {
            skill[i] = skill[i + 1];
            skill[i + 1] = NULL;
        }
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 4 || !skill[idx])
        return ;
    skill[idx]->use(target);
}
