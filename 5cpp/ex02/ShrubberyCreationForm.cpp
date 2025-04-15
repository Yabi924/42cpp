#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Target("Huh") {}
ShrubberyCreationForm::ShrubberyCreationForm(const str &_Target): AForm("ShrubberyCreation", 145, 137), Target(_Target) {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm("ShrubberyCreation", 145, 137), Target(other.Target) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::coolExecute() const
{
    
}
