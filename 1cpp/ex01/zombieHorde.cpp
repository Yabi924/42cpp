#include "Zombie.hpp"

void    Zombie::setname(std::string name)
{
    this->Zombie_name = name;
}

Zombie *Zombie::zombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *Zombieeee = new Zombie[N];
    if (N == 0 || !name[0])
        return NULL;
    while (i < N)
        Zombieeee[i++].setname(name);
    return Zombieeee;
}
