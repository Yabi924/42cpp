#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
private:
    const str formName;
    bool sign;
    const int gradeToSign;
    const int gradeToExecute;

public:
    Form();
    Form(const str &_formName, int _gradeToSign, int _gradeToExecute);
    Form(const Form &other);
    ~Form();

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

    const str &getFormName() const;
    str getSign() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(const Bureaucrat &b);

    Form &operator=(const Form &other);
};

std::ostream &operator<<(std::ostream &out, const Form &form);


#endif