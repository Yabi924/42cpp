#include "Bureaucrat.hpp"

void testTooHigh(void)
{
    std::cout << "--------[Test too high]----------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 10);
        Yabi.increment(9);
        std::cout << Yabi << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 0);
        std::cout << Yabi << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
}

void testTooLow(void)
{
    std::cout << "--------[Test too low]---------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 140);
        Yabi.decrement(10);
        std::cout << Yabi << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 160);
        std::cout << Yabi << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
}

void tsestOCCF()
{
    std::cout << "--------[Test OCCF]---------------------" << std::endl;

    Bureaucrat *A = new Bureaucrat("A", 1);
    Bureaucrat *B = new Bureaucrat(*A);
    Bureaucrat *C = new Bureaucrat;
    Bureaucrat *D = new Bureaucrat("D", 105);

    *C = *D;

    std::cout << *A << std::endl;
    std::cout << *B << std::endl;
    std::cout << *C << std::endl;
    std::cout << *D << std::endl;

    delete A;
    delete B;
    delete C;
    delete D;

}

int main(void)
{
    testTooHigh();
    // testTooLow();
    // tsestOCCF();
}
