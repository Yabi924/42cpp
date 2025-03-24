#include "inc/Water.hpp"

Water::~Water() {}

Water::Water(): AMateria("water") {}

AMateria *Water::clone(void) const
{
    return new Water();
}

void Water::use(ICharacter &target)
{
    std::cout << "* shoots an Water ball at " << target.getName() << " *" << std::endl;
}
