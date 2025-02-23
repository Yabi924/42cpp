#include <iostream>
#include <string>
#include <cmath>

int main(void)
{
    int nbr = (1 << 8);
    float f = 321.1111 * nbr;
    // std::cout << f << std::endl;
    int fixed = roundf(f);
    std::cout << fixed << std::endl;

    //c1
    // std::cout << roundf((float)fixed) / (1 << 8) << std::endl;

    // //c2
    // float re2 = roundf(fixed);
    float re = roundf((float)fixed);
    // std::cout << re << std::endl;
    // std::cout << re2 << std::endl;
    // std::cout << re2 / (1 << 8) << std::endl;
    // std::cout << roundf(fixed / (1 << 8)) << std::endl;
    std::cout << re / (1 << 8) << std::endl;
    // std::cout << roundf((float)re) << std::endl;
    // float b = fixed >> nbr;
    // std::cout << b << std::endl;
    return 0;
}