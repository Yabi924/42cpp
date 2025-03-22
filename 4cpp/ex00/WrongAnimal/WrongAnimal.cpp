#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(): type("huh")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &_type): type(_type)
{
    std::cout << "WrongAnimal Arg constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << this->type + "?" << std::endl;
}
