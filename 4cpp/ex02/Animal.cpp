#include "include/Animal.hpp"

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(): type("huh")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string &_type): type(_type)
{
    std::cout << "Animal Arg constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << this->type + "?" << std::endl;
}
