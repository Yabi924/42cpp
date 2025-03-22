#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(): type("huh") {}

WrongAnimal::WrongAnimal(const std::string &_type): type(_type) {}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound(void)
{
    std::cout << this->type + "?" << std::endl;
}
