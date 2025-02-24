#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
    int fixedPointNumber;
    const static int fractionalBits = 8;
    friend std::ostream &operator<<(std::ostream &os, const Fixed& fixed);

    public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed(const float n);
    Fixed(const int n);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    Fixed operator+(const Fixed &other);
    Fixed operator-(const Fixed &other);
    Fixed operator*(const Fixed &other);
    Fixed operator/(const Fixed &other);
    Fixed &operator=(const Fixed &other);

    bool operator>(const Fixed &other);
    bool operator>=(const Fixed &other);
    bool operator<(const Fixed &other);
    bool operator<=(const Fixed &other);
    bool operator==(const Fixed &other);
    bool operator!=(const Fixed &other);
};

#endif