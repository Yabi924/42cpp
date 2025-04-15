#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &other) { *this = other; }
Intern::~Intern() {}
Intern &Intern::operator=(const Intern &other) { (void)other; return *this; }

AForm * Intern::makeForm(const str &_FormName, const str &_target)
{
    int i = -1;
    str form[3] = {"shrubbert creation", "robotomy request", "presidential pardon"};

    while (++i < 3)
        if (form[i] == _FormName)
            break ;

    switch (i)
    {
    case 0:
        return new ShrubberyCreationForm(_target);
    case 1:
        return new RobotomyRequestForm(_target);
    case 2:
        return new PresidentialPardonForm(_target);
    default:
        return NULL;
    }

    return NULL;
}