#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class AForm
{
private:
    const str formName;
    bool sign;
    const int gradeToSign;
    const int gradeToExecute;

public:
    AForm();
    AForm(const str &_formName, int _gradeToSign, int _gradeToExecute);
    AForm(const AForm &other);
    virtual ~AForm();

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

    class FormNotSignException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    const str &getFormName() const;
    str getSign() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(const Bureaucrat &b);
    void execute(Bureaucrat const &executor) const;
    virtual void coolExecute() const = 0;
    AForm &operator=(const AForm &other);
};

std::ostream &operator<<(std::ostream &out, const AForm &form);


#endif