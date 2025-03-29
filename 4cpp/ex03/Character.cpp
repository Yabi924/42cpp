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
    this->skillCount = other.getSkillCount();
    this->uskillCount = other.get_uSkillCount();
    this->Name = other.getName();
    for (int i = 0; i < 4; i++)
        this->skill[i] = other.getSkill(i);
    for (int i = 0; i < 100; i++)
        this->unequipSkill[i] = other.getuSkill(i);
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
    if (skillCount == 4)
    {
        std::cout << this->Name << ": Bag is full." << std::endl;
        unequipSkill[uskillCount++] = m;
        return ;
    }
    skill[skillCount++] = m;
    skillTable(m->getType());
}

void Character::unequip(int idx)
{
    if (!skill[idx] || idx < 0 || idx > 3)
    {
        std::cout << this->Name << ": Unquip index is empty!" << std::endl;
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
    skillTable();
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
        std::cout << "Charater: invalid index: " << idx << ". [Use:0-3]" << std::endl;
    else if (!skill[idx])
        std::cout << target.getName() << ": skill index " << idx << " is empty!" << std::endl;
    else
        skill[idx]->use(target);
}

int Character::getSkillCount(void) const
{
    return (this->skillCount);
}

int Character::get_uSkillCount(void) const
{
    return (this->uskillCount);
}

AMateria *Character::getSkill(int i) const
{
    if (!this->skill[i])
        return (NULL);
    return (this->skill[i]->clone());
}

AMateria *Character::getuSkill(int i) const
{
    if (!this->unequipSkill[i])
        return (NULL);
    return (this->unequipSkill[i]->clone());
}

void Character::skillTable(std::string type) const
{
    std::cout << "Charater->" << this->Name << ": now adding->" << type <<std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Skill index " << i << ":";
        if (!skill[i])
            std::cout << "Empty.";
        else
            std::cout << skill[i]->getType();
        std::cout << std::endl;
    }
}

void Character::skillTable(void) const
{
    std::cout << "Now skill:" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Skill index " << i << ":";
        if (!skill[i])
            std::cout << "Empty.";
        else
            std::cout << skill[i]->getType();
        std::cout << std::endl;
    }
}
