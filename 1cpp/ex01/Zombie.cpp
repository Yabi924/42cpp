#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->Zombie_name = "";
}

Zombie::~Zombie()
{
    std::cout << "Deleted zombie: " << Zombie_name << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->Zombie_name << ": BraiiiiiiinnnzzzZ" << std::endl;
}