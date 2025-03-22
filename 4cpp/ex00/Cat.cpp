#include "include/Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const std::string &_type): Animal(_type)
{
    std::cout << "Cat Arg constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() 
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << type << ": miaoooo" << std::endl;
}
