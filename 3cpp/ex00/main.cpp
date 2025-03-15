#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Yabi");

    for (int i = 0; i < 10; i++)
        a.attack("Noya");
    a.beRepaired(8);

    a.takeDamage(18);
    a.attack("You");
    return (0);
}