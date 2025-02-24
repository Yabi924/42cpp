#include "Fixed.hpp"

Fixed::Fixed(void):fixedPointNumber(0)
{
}

Fixed::Fixed(const Fixed &other)
{
    fixedPointNumber = other.fixedPointNumber;
}

Fixed::Fixed(int n): fixedPointNumber(n * (1 << fractionalBits))
{
}

Fixed::Fixed(const float n): fixedPointNumber(roundf(n * (1 << fractionalBits)))
{
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
    return this->fixedPointNumber;
}

void Fixed::setRawBits(int const raw)
{
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
    os << fixed.toFloat();
    return os;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return *this;
    this->fixedPointNumber = other.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed &other)
{
    return Fixed (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other)
{
    return Fixed (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)
{
    return Fixed (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other)
{
    return Fixed (this->toFloat() / other.toFloat());
}

bool Fixed::operator>(const Fixed &other)
{
    if (this->toFloat() > other.toFloat())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &other)
{
    if (this->toFloat() >= other.toFloat())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &other)
{
    if (this->toFloat() < other.toFloat())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &other)
{
    if (this->toFloat() <= other.toFloat())
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &other)
{
    if (this->toFloat() == other.toFloat())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &other)
{
    if (this->toFloat() != other.toFloat())
        return true;
    return false;
}
