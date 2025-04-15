#ifndef SCF_HPP
# define SCF_HPP

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
private:
    str Target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const str &_target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();

    void coolExecute() const;
};

#endif