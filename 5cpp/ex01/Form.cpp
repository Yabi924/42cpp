#include "Form.hpp"

Form::Form(): formName("unknown"), sign(false), gradeToSign(150), gradeToExecute(150) {}
Form::Form(const Form &other): formName(other.formName), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}
Form::~Form() {}

Form::Form(const str &_formName, int _gradeToSign, int _gradeToExecute): formName(_formName), sign(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

const str &Form::getFormName() const { return (this->formName); }
int Form::getGradeToSign() const { return (this->gradeToSign); }
int Form::getGradeToExecute() const { return (this->gradeToExecute); }

str Form::getSign() const
{
    if (this->sign == true)
        return (GREEN + str("Yes") + RESET);
    else
        return (RED + str("No") + RESET);
}

Form &Form::operator=(const Form &other)
{
    if (this == &other)
        return (*this);
    this->sign = other.sign;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "[Form status]" << std::endl;
    out << "Form name: " << form.getFormName() << std::endl;
    out << "Is signed: " << form.getSign() << std::endl;
    out << "Grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute();

    return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void Form::beSigned(const Bureaucrat &b)
{
    if (this->sign == true)
    {
        std::cout << this->formName << ": already signed" << std::endl;
        return ;
    }
    if (b.getGrade() <= this->gradeToSign)
        this->sign = true;
    else
        throw GradeTooLowException();
}
