#include "Zombie.hpp"

int main(void)
{
    int N = 1;
    int i = 0;
    Zombie *ZH = Zombie::zombieHorde(N, "XD");
    while (i < N)
    {
        ZH[i++].announce();
    }
    delete []ZH;
    return (0);
}