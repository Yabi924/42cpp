#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    // + - * / =
    // std::cout << b << std::endl;
    // std::cout << a + b << std::endl;
    // std::cout << a - b << std::endl;
    // std::cout << a * b << std::endl;
    // std::cout << a / b << std::endl;

    //> >= < <= == !=
    // if (a > b)
    //     std::cout << "yes" << std::endl;
    // else 
    //     std::cout << "no" << std::endl;

    // if (a >= b)
    //     std::cout << "yes" << std::endl;
    // else 
    //     std::cout << "no" << std::endl;

    // if (a < b)
    //     std::cout << "yes" << std::endl;
    // else
    //     std::cout << "no" << std::endl;

    // if (a <= b)
    //     std::cout << "yes" << std::endl;
    // else
    //     std::cout << "no" << std::endl;

    // if (a == b)
    //     std::cout << "yes" << std::endl;
    // else
    //     std::cout << "no" << std::endl;
    
    // if (a != b)
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
    // Fixed &e = Fixed::max(c, d);
    // e = 100;
    // std::cout << Fixed::max(c, d) << std::endl;

    //static const function
    // const Fixed c(12);
    // const Fixed d(13);
    // Fixed &e = Fixed::max(c, d);
    // e = 100;
    // std::cout << Fixed::max(c, d) << std::endl;
    return 0;
}