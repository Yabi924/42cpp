#include "inc/AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &_type): type(_type) {}

AMateria::~AMateria() {}

void AMateria::use(ICharacter &target)
{
    std::cout << "Attacked " << target.getName() << "!" << std::endl;
}

const std::string &AMateria::getType(void) const
{
    return (this->type);
}
