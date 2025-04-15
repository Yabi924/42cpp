#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

void test3()
{
    PresidentialPardonForm *f1 = new PresidentialPardonForm("A");
    Bureaucrat *Nina = new Bureaucrat("Nina", 150);
    Bureaucrat *Yabi = new Bureaucrat("Yabi", 6);
    Bureaucrat *Noya = new Bureaucrat("Noya", 5);

    std::cout << "------------------------" << std::endl;
    std::cout << *f1 << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Nina << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Yabi << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Noya << std::endl;
    std::cout << "------------------------" << std::endl;

    Nina->signForm(*f1);
    Yabi->signForm(*f1);
    Yabi->executeForm(*f1);
    Noya->executeForm(*f1);

    delete f1;
    delete Nina;
    delete Yabi;
    delete Noya;
}

void test2()
{
    RobotomyRequestForm *f1 = new RobotomyRequestForm("A");
    Bureaucrat *Nina = new Bureaucrat("Nina", 150);
    Bureaucrat *Yabi = new Bureaucrat("Yabi", 72);
    Bureaucrat *Noya = new Bureaucrat("Noya", 45);

    std::cout << "------------------------" << std::endl;
    std::cout << *f1 << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Nina << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Yabi << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Noya << std::endl;
    std::cout << "------------------------" << std::endl;

    Nina->signForm(*f1);
    Yabi->signForm(*f1);
    Yabi->executeForm(*f1);
    Noya->executeForm(*f1);

    delete f1;
    delete Nina;
    delete Yabi;
    delete Noya;
}

void test1()
{
    ShrubberyCreationForm *f1 = new ShrubberyCreationForm("Apple");
    Bureaucrat *Nina = new Bureaucrat("Nina", 150);
    Bureaucrat *Yabi = new Bureaucrat("Yabi", 138);
    Bureaucrat *Noya = new Bureaucrat("Noya", 137);

    std::cout << "------------------------" << std::endl;
    std::cout << *f1 << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Nina << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Yabi << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << *Noya << std::endl;
    std::cout << "------------------------" << std::endl;

    Nina->signForm(*f1);
    Yabi->signForm(*f1);
    Yabi->executeForm(*f1);
    Noya->executeForm(*f1);

    delete f1;
    delete Nina;
    delete Yabi;
    delete Noya;
}

int main(void)
{
    if (MYFLAG == 1)
        test1();
    else if (MYFLAG == 2)
        test2();
    else if (MYFLAG == 3)
        test3();
}
