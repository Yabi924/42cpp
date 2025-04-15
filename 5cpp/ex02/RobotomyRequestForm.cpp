#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Target("Huh") {}
RobotomyRequestForm::RobotomyRequestForm(const str &_Target): AForm("RobotomyRequest", 145, 137), Target(_Target) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm("RobotomyRequest", 145, 137), Target(other.Target) {}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::coolExecute() const
{
    std::cout << "good" << std::endl;
}
