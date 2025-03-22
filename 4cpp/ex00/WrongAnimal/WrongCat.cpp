#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const std::string &_type): WrongAnimal(_type)
{
    std::cout << "WrongCat Arg constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat() 
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this == &other)
        return (*this);
    type = other.type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << type << ": miaoooo" << std::endl;
}
