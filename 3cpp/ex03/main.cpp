#include "FlagTrap.hpp"

int main(void)
{
    FlagTrap a("Yabi");

    for (int i = 0; i < 100; i++)
        a.attack("Noya");

    a.takeDamage(90);
    a.beRepaired(80);
    a.highFiveGuys();
    return (0);
}
