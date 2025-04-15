#ifndef RRF_HPP
# define RRF_HPP

# include "AForm.hpp"
# include "cstdlib"
# include <ctime>

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