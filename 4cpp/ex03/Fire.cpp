#include "inc/Fire.hpp"

Fire::~Fire() {}

Fire::Fire(): AMateria("fire") {}

AMateria *Fire::clone(void) const
{
    return new Fire();
}

void Fire::use(ICharacter &target)
{
    std::cout << "* shoots an Fire bolt at " << target.getName() << " *" << std::endl;
}
