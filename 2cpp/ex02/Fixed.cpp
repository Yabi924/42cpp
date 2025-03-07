/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:43:08 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 19:02:36 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed(): FixedPointValue(0){}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::Fixed(const float f): FixedPointValue(roundf(f * (1 << fractionalBits))){}

Fixed::Fixed(const int integer): FixedPointValue(integer * (1 << fractionalBits)){}

Fixed::~Fixed(){}

void    Fixed::setRawBits(int const raw)
{
    this->FixedPointValue = raw;
}

int     Fixed::getRawBits(void) const
{
    return (this->FixedPointValue);
}

int     Fixed::toInt(void) const
{
    return (roundf(this->FixedPointValue / (1 << fractionalBits)));
}

float   Fixed::toFloat(void) const
{
    return ((float)this->FixedPointValue / (1 << fractionalBits));
}

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed   &Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return (*this);

    this->FixedPointValue = other.FixedPointValue;
    return (*this);
}

Fixed   Fixed::operator+(const Fixed &other)
{
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed   Fixed::operator-(const Fixed &other)
{   
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed   Fixed::operator*(const Fixed &other)
{
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed   Fixed::operator/(const Fixed &other)
{
    return (Fixed(this->toFloat() / other.toFloat()));
}

bool    Fixed::operator<(const Fixed &other) const
{
    if (this->FixedPointValue < other.FixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator<=(const Fixed &other) const
{
    if (this->FixedPointValue <= other.FixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator>(const Fixed &other) const
{
    if (this->FixedPointValue > other.FixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator>=(const Fixed &other) const
{
    if (this->FixedPointValue >= other.FixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator==(const Fixed &other) const
{
    if (this->FixedPointValue == other.FixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator!=(const Fixed &other) const
{
    if (this->FixedPointValue != other.FixedPointValue)
        return (true);
    return (false);
}

Fixed   &Fixed::operator++()
{
    this->FixedPointValue++;
    return (*this);
}

Fixed   &Fixed::operator--()
{
    this->FixedPointValue--;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed temp(*this);
    this->FixedPointValue++;
    return (temp);
}

Fixed   Fixed::operator--(int)
{
    Fixed temp(*this);
    this->FixedPointValue--;
    return (temp);
}

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed   &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}