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

    public:
    Fixed(void);
    Fixed(int n);
    Fixed(float n);
    ~Fixed();
};

#endif