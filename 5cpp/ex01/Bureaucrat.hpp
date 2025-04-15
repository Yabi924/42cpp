#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define RESET  "\033[0m"
# define RESETEND  "\033[0m" << std::endl

typedef std::string str;

class Form;

class Bureaucrat
{
private:
    const str Name;
    unsigned int grade;

public:
    Bureaucrat();
    Bureaucrat(const str &_Name, unsigned int _grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &other);

    class GradeTooLowException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    class GradeTooHighException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    const str &getName() const;
    int getGrade() const;
    void increment(int n);
    void decrement(int n);

    void signForm(Form &Form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#include "Form.hpp"

#endif