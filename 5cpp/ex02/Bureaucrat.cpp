#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("Huh"), grade(150) {}

Bureaucrat::Bureaucrat(const str &_Name, unsigned int _grade): Name(_Name), grade(_grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): Name(other.Name)
{
    *this = other;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this == &other)
        return (*this);
    this->grade = other.grade;
    return (*this);
}

const str &Bureaucrat::getName() const { return (this->Name); }

int Bureaucrat::getGrade() const { return (this->grade); }

void Bureaucrat::decrement(int n)
{
    if (this->grade + n > 150)
        throw GradeTooLowException();
    this->grade += n;
}

void Bureaucrat::increment(int n)
{
    if (this->grade - n < 1)
        throw GradeTooHighException();
    this->grade -= n; 
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << GREEN << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << RESET;
    return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw ()
{
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
    return ("Grade too low");
}

void Bureaucrat::signForm(AForm &Form)
{
    try
    {
        Form.beSigned(*this);
        std::cout << GREEN << this->Name << " signed " << Form.getFormName() << RESETEND;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << this->Name << " couldn't sign " << Form.getFormName() << " because " << e.what() << '.' << RESETEND;
    }
}

void Bureaucrat::executeForm(const AForm &form)
{
    try
    {
        std::cout << GREEN << this->Name << " executed " << form.getFormName() << RESETEND;
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << this->Name << " Execute form: " << e.what() << RESETEND;
    }
}
