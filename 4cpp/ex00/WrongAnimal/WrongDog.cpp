#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal()
{
    std::cout << "WrongDpg Default constructor called" << std::endl;
    type = "WrongDog";
}

WrongDog::WrongDog(const std::string &_type): WrongAnimal(_type)
{
    std::cout << "WrongDpg Arg constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal(other)
{
    std::cout << "WrongDpg Copy constructor called" << std::endl;
}

WrongDog::~WrongDog() 
{
    std::cout << "WrongDog Destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}

void WrongDog::makeSound(void)
{
    std::cout << type << ": aoaoaoaoaoao" << std::endl;
}
