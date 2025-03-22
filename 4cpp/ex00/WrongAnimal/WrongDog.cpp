#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal() {}

WrongDog::WrongDog(const std::string &_type): WrongAnimal(_type) {}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal(other){}

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
