#include "Whatever.hpp"

void pdfint()
{
    std::cout << "------[test pdf int]------" << std::endl;
    int a = 2;
    int b = 3;

    ::swap(a, b);

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
}

void pdfstr()
{
    std::cout << "------[test pdf string]------" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
}

struct test
{
    int n;
};

void mytest1()
{
    std::cout << "------[test struct]------" << std::endl;
    test a = {1};
    test b = {2};

    std::cout << "a = " << a.n << ", b = " << b.n << std::endl;

    ::swap(a, b);

    std::cout << "a = " << a.n << ", b = " << b.n << std::endl;
}

int main( void )
{
    if (MYFLAG == 1)
        pdfint();
    else if (MYFLAG == 2)
        pdfstr();   
    else if (MYFLAG == 3)
        mytest1();
    return 0;
}
