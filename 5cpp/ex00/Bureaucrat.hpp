#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

typedef std::string str;
# ifndef MYFLAG
#  define MYFLAG 0
# endif 

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
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif