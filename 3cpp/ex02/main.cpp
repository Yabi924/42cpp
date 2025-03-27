#include "FlagTrap.hpp"

int main(void)
{
    FlagTrap b;
    FlagTrap a("Yabi");
    FlagTrap c(a);

    for (int i = 0; i < 99; i++)
        a.attack("Noya");

    a.takeDamage(99);
    a.beRepaired(80);
    a.highFiveGuys();
    return (0);
}
