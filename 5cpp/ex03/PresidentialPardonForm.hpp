#ifndef PPF_HPP
# define PPF_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
    str Target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(const str &_target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();

    void coolExecute() const;
};

#endif