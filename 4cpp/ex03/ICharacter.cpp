#include "inc/ICharacter.hpp"

ICharacter::ICharacter(const std::string &_Name): Name(_Name), skillCount(0), uskillCount(0)
{
    for (int i = 0; i < 4; i++)
        skill[i] = NULL;
    for (int i = 0; i < 100; i++)
        unequipSkill[i] = NULL;
}

ICharacter::~ICharacter() {}
