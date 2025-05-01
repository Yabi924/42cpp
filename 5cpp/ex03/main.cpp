#include "Bureaucrat.hpp"
#include "Intern.hpp"

void bruh()
{
    Intern Noya;
    AForm *Form;

    try
    {
        Form = Noya.makeForm("huh", "What");
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << e.what() << RESETEND;
    }
}

int main(void)
{
    Intern Noya;
    AForm *Form = NULL;

    if (MYFLAG == 1)
        Form = Noya.makeForm("shrubbert creation", "Apple");
    else if (MYFLAG == 2)
        Form = Noya.makeForm("robotomy request", "robotomy");
    else if (MYFLAG == 3)
        Form = Noya.makeForm("presidential pardon", "ppf");
    else
        bruh();

    Bureaucrat Yabi("Yabi", 1);

    if (Form)
    {
        Yabi.signForm(*Form);
        Yabi.executeForm(*Form);
        delete Form;
    }
}
