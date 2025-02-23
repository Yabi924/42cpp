#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
    private:
    int fixedPointNumber;
    const static int fractional_bit = 8;

    public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif