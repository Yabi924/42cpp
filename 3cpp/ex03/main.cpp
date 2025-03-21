#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap a("yabi");
    std::cout << "===============================\n";

    a.takeDamage(10);
    std::cout << "===============================\n";

    a.beRepaired(1);
    std::cout << "===============================\n";

    DiamondTrap b(a);
    std::cout << "===============================\n";

    b.beRepaired(1);
    std::cout << "===============================\n";

    return (0);
}
