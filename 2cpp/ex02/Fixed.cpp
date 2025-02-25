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

Fixed Fixed::operator+(const Fixed &other) const
{
    return Fixed (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
    return Fixed (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
    return Fixed (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
    return Fixed (this->toFloat() / other.toFloat());
}

bool Fixed::operator>(const Fixed &other) const
{
    if (this->toFloat() > other.toFloat())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
    if (this->toFloat() >= other.toFloat())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &other) const
{
    if (this->toFloat() < other.toFloat())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
    if (this->toFloat() <= other.toFloat())
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &other) const
{
    if (this->toFloat() == other.toFloat())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
    if (this->toFloat() != other.toFloat())
        return true;
    return false;
}

Fixed &Fixed::operator++()
{
    fixedPointNumber += 1;
    return *this;
}

Fixed &Fixed::operator--()
{
    fixedPointNumber -= 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    fixedPointNumber += 1;
    return temp;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    fixedPointNumber -= 1;
    return temp;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b; 
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}