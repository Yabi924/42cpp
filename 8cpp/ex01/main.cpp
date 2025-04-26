#include "Span.hpp"

void mytest()
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(0);
        sp.addNumber(-100);
        sp.addNumber(10000);
        sp.addNumber(4);
        sp.addNumber(-110000);
        sp.addNumber(2); // max
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    cout << "shortest: " << sp.shortestSpan() << endl;
    cout << "longest: " << sp.longestSpan() << endl;
}

void pdf()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

}

int main()
{
    if (MYFLAG == 1)
        pdf();
    else if (MYFLAG == 2)
        mytest();
    return 0;
}
