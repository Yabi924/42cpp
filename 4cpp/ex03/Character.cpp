#include "inc/Character.hpp"

Character::Character(const std::string &_Name)
{
    Name = _Name;
    skillCount = 0;
    uskillCount = 0;
    for (int i = 0; i < 4; i++)
        skill[i] = NULL;
    for (int i = 0; i < 100; i++)
        unequipSkill[i] = NULL;
}

Character::Character(const Character &other)
{
    *this = other;
}

Character::Character(const ICharacter &other)
{
    *this = other;
}

Character::~Character()
{
    for (int i = 0; i < skillCount; i++)
        delete skill[i];
    for (int i = 0; i < uskillCount; i++)
        delete unequipSkill[i];
}

Character &Character::operator=(const ICharacter &other)
{
    if (this == &other)
        return (*this);
    this->skillCount = other.skillCount;
    this->uskillCount = other.uskillCount;
    this->Name = other.Name;
    for (int i = 0; i < 4; i++)
    {
        if (!other.skill[i])
            this->skill[i] = NULL;
        else
            this->skill[i] = other.skill[i]->clone();
    }
    for (int i = 0; i < 100; i++)
    {
        if (!other.unequipSkill[i])
            this->unequipSkill[i] = NULL;
        else
            this->unequipSkill[i] = other.unequipSkill[i]->clone();
    }
    return (*this);
}


Character &Character::operator=(const Character &other)
{
    if (this == &other)
        return (*this);
    this->skillCount = other.skillCount;
    this->uskillCount = other.uskillCount;
    this->Name = other.Name;
    for (int i = 0; i < 4; i++)
    {
        if (!other.skill[i])
            this->skill[i] = NULL;
        else
            this->skill[i] = other.skill[i]->clone();
    }
    for (int i = 0; i < 100; i++)
    {
        if (!other.unequipSkill[i])
            this->unequipSkill[i] = NULL;
        else
            this->unequipSkill[i] = other.unequipSkill[i]->clone();
    }
    return (*this);
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
    {
        std::cout << "Max skill" << std::endl;
        unequipSkill[uskillCount++] = m;
    }
    //show skill table
}

void Character::unequip(int idx)
{
    if (!skill[idx] || idx < 0 || idx > 3)
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
    if (idx < 0 || idx > 4)
        std::cout << "Charater: invalid index: " << idx << ". [Use:0-3]" << std::endl;
    else if (!skill[idx])
        std::cout << target.getName() << " skill index:" << idx << " is empty!" << std::endl;
    else
        skill[idx]->use(target);
}

