#include "Bureaucrat.hpp"

void testBad()
{
    std::cout << "------[test bad]-------------" << std::endl;

    try
    {
        std::cout << "Try to sign=0, to execute=1" << std::endl;
        Form F1("form1", 0, 1);
        std::cout << F1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }

    std::cout << "-----------------------------" << std::endl;

    try
    {
        std::cout << "Try to sign=1, to execute=0" << std::endl;
        Form F1("form1", 1, 0);
        std::cout << F1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }

    std::cout << "-----------------------------" << std::endl;

    try
    {
        std::cout << "Try to sign=151, to execute=1" << std::endl;
        Form F1("form1", 151, 1);
        std::cout << F1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }

    std::cout << "-----------------------------" << std::endl;

    try
    {
        std::cout << "Try to sign=1, to execute=151" << std::endl;
        Form F1("form1", 1, 151);
        std::cout << F1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }

}

void testGood()
{
    std::cout << "------[test good]------------" << std::endl;

    try
    {
        std::cout << "Try to sign=1, to execute=1" << std::endl;
        Form F1("form1", 1, 1);
        std::cout << F1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }
    
    std::cout << "-----------------------------" << std::endl;

    try
    {
        std::cout << "Try to sign=150, to execute=150" << std::endl;
        Form F1("form1", 150, 150);
        std::cout << F1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }

    std::cout << "-----------------------------" << std::endl;

    try
    {
        std::cout << "Try to sign=50, to execute=50" << std::endl;
        Form F1("form1", 50, 50);
        std::cout << F1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }

    std::cout << "-----------------------------" << std::endl;
}

void testGoodSign()
{
    std::cout << "----[test good sign]-----" << std::endl;

    Form f1("form1", 10, 8);
    Bureaucrat Yabi("Yabi", 5);

    //form origina status
    // std::cout << f1 << std::endl;

    std::cout << RED << "test1: Bureaucrat grade 5, Form to sign=10, to execute=8" << RESETEND;
    std::cout << "------------------------" << std::endl;

    Yabi.signForm(f1);

    std::cout << "------------------------" << std::endl;
    
    std::cout << f1 << std::endl;

    std::cout << "------------------------" << std::endl;
    std::cout << RED << std::endl << "test2: Bureaucrat grade 150, Form to sign=150, to execute=150" << RESETEND;
    Form f2("form2", 150, 150);
    Bureaucrat Noya("Noya", 150);

    std::cout << "------------------------" << std::endl;

    Noya.signForm(f2);

    std::cout << "------------------------" << std::endl;
    
    std::cout << f2 << std::endl;
}

void testBadSign()
{
    std::cout << "----[test bad sign]-----" << std::endl;

    Form f1("form1", 10, 8);
    Bureaucrat Yabi("Yabi", 150);

    //form origina status
    // std::cout << f1 << std::endl;

    std::cout << "test: Bureaucrat grade 150, Form to sign=10, to execute=8" << std::endl;
    std::cout << "------------------------" << std::endl;

    Yabi.signForm(f1);

    std::cout << "------------------------" << std::endl;
    
    std::cout << f1 << std::endl;
}

void testOCCF()
{
    std::cout << "----[Test OCCF]---------" << std::endl;

    Form *A = new Form("A", 19, 19);
    Form *B = new Form(*A);
    Form *C = new Form;
    Form *D = new Form("D", 105, 10);

    Bureaucrat Yabi("Yabi", 1);
    Yabi.signForm(*D);

    //only copy sign status
    *C = *D;

    std::cout << *A << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *B << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *C << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *D << std::endl;

    delete A;
    delete B;
    delete C;
    delete D;

}

int main(void)
{
    if (MYFLAG == 1)
        testBad();
    else if (MYFLAG == 2)
        testGood();
    else if (MYFLAG == 3)
        testGoodSign();
    else if (MYFLAG == 4)
        testBadSign();
    else if (MYFLAG == 5)
        testOCCF();
}
