#ifndef SCF_HPP
# define SCF_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
    str Target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const str &_target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();

    void coolExecute() const;
};

#endif