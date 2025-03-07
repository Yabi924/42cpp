/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:42:57 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 19:00:58 by yyan-bin         ###   ########.fr       */
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

    void    setRawBits(int const raw);
    int     getRawBits(void) const;
    float   toFloat(void) const;
    int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif