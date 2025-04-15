#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

void test1()
{
    Bureaucrat *Yabi = new Bureaucrat("Yabi", 1);
    RobotomyRequestForm *RRF = new RobotomyRequestForm("A");

    try
    {
        Yabi->signForm(*RRF);
        RRF->execute(*Yabi);
    }
    catch(const std::exception& e)
    {
        delete Yabi;
        delete RRF;
        std::cerr << RED << e.what() << RESETEND;
        Yabi = NULL;
        RRF = NULL;
    }
    if (Yabi)
        delete Yabi;
    if (RRF)
        delete RRF;
}

void test2()
{
    Bureaucrat *Yabi = new Bureaucrat("Yabi", 145);
    Bureaucrat *Noya = new Bureaucrat("Noya", 137);
    RobotomyRequestForm *RRF = new RobotomyRequestForm("A");

    try
    {
        Yabi->signForm(*RRF);
        // Noya->signForm(*RRF);
        // RRF->execute(*Yabi);
        RRF->execute(*Noya);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }
    delete Yabi;
    delete RRF;
    delete Noya;
}

int main(void)
{
    // test1();
    test2();
}
