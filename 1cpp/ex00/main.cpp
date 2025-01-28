#include "Zombie.hpp"

int main()
{
    Zombie* Zombie_A = newZombie("A");
    Zombie_A->announce();
    delete Zombie_A;

    randomChump("Zombie_B");
    randomChump("Zombie_C");
    randomChump("Zombie_D");

    return 0;
}
