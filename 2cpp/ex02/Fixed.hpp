/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:42:57 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 19:01:09 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

private:
    int FixedPointValue;
    static const int fractionalBits;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int integer);
    Fixed(const float f);
    ~Fixed();

    Fixed   &operator=(const Fixed &other);
    Fixed   operator+(const Fixed &other);
    Fixed   operator-(const Fixed &other);
    Fixed   operator*(const Fixed &other);
    Fixed   operator/(const Fixed &other);

    bool     operator<(const Fixed &other) const;
    bool     operator<=(const Fixed &other) const;
    bool     operator>(const Fixed &other) const;
    bool     operator>=(const Fixed &other) const;
    bool     operator==(const Fixed &other) const;
    bool     operator!=(const Fixed &other) const;

    //++i;
    Fixed   &operator++();
    Fixed   &operator--();

    //i++;
    Fixed   operator++(int);
    Fixed   operator--(int);

    void    setRawBits(int const raw);
    int     getRawBits(void) const;
    float   toFloat(void) const;
    int     toInt(void) const;

    static  Fixed &min(Fixed &a, Fixed &b);
    static  const Fixed &min(const Fixed &a, const Fixed &b);
    static  Fixed &max(Fixed &a, Fixed &b);
    static  const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif