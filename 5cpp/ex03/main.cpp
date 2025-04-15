#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern Noya;
    AForm *Form;
    if (MYFLAG == 1)
        Form = Noya.makeForm("shrubbert creation", "Apple");
    else if (MYFLAG == 2)
        Form = Noya.makeForm("robotomy request", "robotomy");
    else if (MYFLAG == 3)
        Form = Noya.makeForm("presidential pardon", "ppf");
    else 
        Form = Noya.makeForm("huh", "What");

    Bureaucrat Yabi("Yabi", 1);

    if (Form)
    {
        Yabi.signForm(*Form);
        Yabi.executeForm(*Form);
        delete Form;
    }
}
