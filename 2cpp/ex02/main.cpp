#include "Fixed.hpp"

int main(void)
{
    Fixed a(5.1f);
    // Fixed b(5.1f);
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << b << std::endl;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;

    if (a > b)
        std::cout << "yes" << std::endl;
    else 
        std::cout << "no" << std::endl;

    if (a >= b)
        std::cout << "yes" << std::endl;
    else 
        std::cout << "no" << std::endl;

    if (a < b)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;

    if (a <= b)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;

    if (a == b)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    
    if (a != b)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}