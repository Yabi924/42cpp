#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap a("Yabi");

    a.guardGate();

    for (int i = 0; i < 50; i++)
        a.attack("Noya");

    a.takeDamage(90);
    a.beRepaired(80);
    return (0);
}