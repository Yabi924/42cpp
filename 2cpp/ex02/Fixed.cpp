#include "Fixed.hpp"

Fixed::Fixed(void):fixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    fixedPointNumber = other.fixedPointNumber;
}

Fixed::Fixed(int n): fixedPointNumber(n * (1 << fractionalBits))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): fixedPointNumber(roundf(n * (1 << fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->fixedPointNumber = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedPointNumber;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPointNumber = raw;
}

float Fixed::toFloat(void) const
{
    return (((float)fixedPointNumber) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
    return roundf((fixedPointNumber / (1 << fractionalBits)));
}

std::ostream &operator<<(std::ostream &os, const Fixed& fixed)
{
    // std::cout << fixed.fixedPointNumber << std::endl;
    os << fixed.toFloat();
    return os;
}