#include "include/Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const std::string &_type): Animal(_type)
{
    std::cout << "Dog Arg constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << type << ": aoaoaoaoaoao" << std::endl;
}
