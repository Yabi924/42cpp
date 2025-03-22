#include "include/Dog.hpp"

Dog::Dog(): Animal()
{
    BrainPower = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const std::string &_type): Animal(_type)
{
    BrainPower = new Brain();
    std::cout << "Dog Arg constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
    BrainPower = new Brain();
    std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog() 
{
    delete BrainPower;
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
