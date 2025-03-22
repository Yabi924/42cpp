#include "include/Animal.hpp"

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(): type("huh") {}

Animal::Animal(const std::string &_type): type(_type) {}

Animal::Animal(const Animal &other)
{
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void Animal::makeSound(void)
{
    std::cout << this->type + "?" << std::endl;
}
