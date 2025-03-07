/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 22:16:12 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/07 18:30:38 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a(2);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    // + - * / =
    // std::cout << a + b << std::endl;
    // std::cout << a - b << std::endl;
    // std::cout << a * b << std::endl;
    // std::cout << a / b << std::endl;

    //> >= < <= == !=
    // if (a > b)
    //     std::cout << "yes" << std::endl;
    // else 
    //     std::cout << "no" << std::endl;

    // ++i i++
    /*
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    */

    // --i i--;
    /*
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    */

    // std::cout << Fixed::max(c, d) << std::endl;
    // std::cout << Fixed::max(Fixed(82), Fixed(20.333f)) << std::endl;
    // std::cout << Fixed::min(Fixed(82), Fixed(20.333f)) << std::endl;

    //static normal function
    // Fixed c(12);
    // Fixed d(13);
    // // Fixed &e = Fixed::max(c, d);
    // // e = 100;
    // std::cout << Fixed::max(c, d) << std::endl;

    //static const function
    // const Fixed c(12);
    // const Fixed d(15);
    // // Fixed &e = Fixed::max(c, d);
    // // e = 100;
    // std::cout << Fixed::max(c, d) << std::endl;
    return 0;
}