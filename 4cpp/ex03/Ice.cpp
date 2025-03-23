#include "inc/Ice.hpp"

Ice::~Ice() {}

Ice::Ice(): AMateria("ice") {}

AMateria *Ice::clone(void) const
{
    return new Ice();
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}