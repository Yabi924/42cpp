#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Target("Huh") {}
PresidentialPardonForm::PresidentialPardonForm(const str &_Target): AForm("PresidentialPardon", 145, 137), Target(_Target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm("PresidentialPardon", 145, 137), Target(other.Target) {}
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::coolExecute() const
{
    
}
