#include "inc/Cure.hpp"

Cure::~Cure() {}

Cure::Cure(): AMateria("Cure") {}

AMateria *Cure::clone(void) const
{
    return new Cure();
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
