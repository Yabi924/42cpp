/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:42:57 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 19:00:36 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

private:
    int FixedPointValue;
    static const int fractionalBits;

public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
    Fixed   &operator=(const Fixed &other);

    void    setRawBits(int const raw);
    int     getRawBits(void) const;

};

#endif