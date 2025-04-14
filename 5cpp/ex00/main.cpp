#include "Bureaucrat.hpp"

void testTooHigh(void)
{
    std::cout << "--------[Test too high]----------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 1);
        std::cout << Yabi.getName() << " is good :)" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 0);
        std::cout << Yabi.getName() << " is good :)" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
}

void testTooLow(void)
{
    std::cout << "--------[Test too low]---------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 10);
        std::cout << Yabi.getName() << " is good :)" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "-------------------------------------------" << std::endl;

    try
    {
        Bureaucrat Yabi("Yabi", 160);
        std::cout << Yabi.getName() << " is good :)" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------" << std::endl;
}

int main(void)
{
    testTooHigh();
    testTooLow();
}