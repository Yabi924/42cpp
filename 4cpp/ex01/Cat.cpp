#include "include/Cat.hpp"

Cat::Cat(): Animal()
{
    type = "Cat";
}

Cat::Cat(const std::string &_type): Animal(_type) {}

Cat::Cat(const Cat &other): Animal(other){}

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

void Cat::makeSound(void)
{
    std::cout << type << ": miaoooo" << std::endl;
}
