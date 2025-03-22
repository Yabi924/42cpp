#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {}

WrongCat::WrongCat(const std::string &_type): WrongAnimal(_type) {}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other){}

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

void WrongCat::makeSound(void)
{
    std::cout << type << ": miaoooo" << std::endl;
}
