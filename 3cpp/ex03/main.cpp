#include "DiamondTrap.hpp"

//HP = 100 (FT)
//Energy = 50 (ST)
//ATK = 30 (FT)
int main(void)
{
    // DiamondTrap d;
    DiamondTrap a("Yabi");
    // DiamondTrap c(a);

    a.whoAmI();

    a.takeDamage(99);
    for (int i = 0; i < 49; i++)
        a.attack("Noya");
    DiamondTrap b(a);

    b.whoAmI();
    b.beRepaired(99);
    b.attack("You");
    return (0);
}
