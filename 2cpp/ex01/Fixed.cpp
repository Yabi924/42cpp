#include "Fixed.hpp"

Fixed::Fixed(void): fixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): fixedPointNumber(n)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
{
    fixedPointNumber = roundf(n * (1 << fractionalBits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
