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
    out << b.getName() << ", bureaucrat grade" << b.getGrade() << ".";
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
