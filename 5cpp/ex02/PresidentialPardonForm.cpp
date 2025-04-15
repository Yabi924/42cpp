#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Target("Huh") {}
PresidentialPardonForm::PresidentialPardonForm(const str &_Target): AForm("PresidentialPardon", 25, 5), Target(_Target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm("PresidentialPardon", 25, 5), Target(other.Target) {}
PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::coolExecute() const
{
    std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
