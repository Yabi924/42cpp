#include "include/Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Cat Default constructor called" << std::endl;
    BrainPower = new Brain();
    type = "Cat";
}

Cat::Cat(const std::string &_type): Animal(_type)
{
    std::cout << "Cat Arg constructor called" << std::endl;
    BrainPower = new Brain();
}

Cat::Cat(const Cat &other): Animal(other)
{
    *this = other;
    std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat() 
{
    delete BrainPower;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->BrainPower->setIdea(i, other.getBrain(i));
    type = other.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << type << ": miaoooo" << std::endl;
}

void Cat::setBrain(int i, std::string set)
{
    BrainPower->setIdea(i, set);
}

const std::string &Cat::getBrain(int i) const 
{
    return (BrainPower->getIdea(i));
}