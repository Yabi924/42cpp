#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &other);
    ~Intern();

    class FormNotFoundException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    Intern &operator=(const Intern &other);
    AForm *makeForm(const str &_FormName, const str &_target);

};

#endif