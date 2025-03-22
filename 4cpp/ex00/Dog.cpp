#include "include/Dog.hpp"

Dog::Dog(): Animal()
{
    type = "Dog";
}

Dog::Dog(const std::string &_type): Animal(_type) {}

Dog::Dog(const Dog &other): Animal(other){}

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

void Dog::makeSound(void)
{
    std::cout << type << ": aoaoaoaoaoao" << std::endl;
}
