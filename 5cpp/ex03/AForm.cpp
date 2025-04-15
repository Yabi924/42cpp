#include "AForm.hpp"

AForm::AForm(): formName("unknown"), sign(false), gradeToSign(150), gradeToExecute(150) {}
AForm::AForm(const AForm &other): formName(other.formName), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}
AForm::~AForm() {}

AForm::AForm(const str &_formName, int _gradeToSign, int _gradeToExecute): formName(_formName), sign(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

const str &AForm::getFormName() const { return (this->formName); }
int AForm::getGradeToSign() const { return (this->gradeToSign); }
int AForm::getGradeToExecute() const { return (this->gradeToExecute); }

str AForm::getSign() const
{
    if (this->sign == true)
        return (GREEN + str("Yes") + RESET);
    else
        return (RED + str("No") + RESET);
}

AForm &AForm::operator=(const AForm &other)
{
    if (this == &other)
        return (*this);
    this->sign = other.sign;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "[Form status]" << std::endl;
    out << "Form name: " << form.getFormName() << std::endl;
    out << "Is signed: " << form.getSign() << std::endl;
    out << "Grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute();

    return (out);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char *AForm::FormNotSignException::what() const throw()
{
    return "Form is not signed";
}

void AForm::beSigned(const Bureaucrat &b)
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

void AForm::execute(const Bureaucrat &executor) const
{
    if (this->sign == false)
        throw FormNotSignException();
    else if (this->gradeToExecute < executor.getGrade())
        throw GradeTooLowException();
    coolExecute();
}
