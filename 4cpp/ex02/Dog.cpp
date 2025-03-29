#include "include/Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog Default constructor called" << std::endl;
    BrainPower = new Brain();
    type = "Dog";
}

Dog::Dog(const std::string &_type): Animal(_type)
{
    std::cout << "Dog Arg constructor called" << std::endl;
    BrainPower = new Brain();
}

Dog::Dog(const Dog &other): Animal(other)
{
    *this = other;
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
    for (int i = 0; i < 100; i++)
        this->BrainPower->setIdea(i, other.getBrain(i));
    type = other.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << type << ": aoaoaoaoaoao" << std::endl;
}

void Dog::setBrain(int i, std::string set)
{
    BrainPower->setIdea(i, set);
}

const std::string &Dog::getBrain(int i) const 
{
    return (BrainPower->getIdea(i));
}