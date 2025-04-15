#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Target("Huh") {}
RobotomyRequestForm::RobotomyRequestForm(const str &_Target): AForm("RobotomyRequest", 72, 45), Target(_Target) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm("RobotomyRequest", 72, 45), Target(other.Target) {}
RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::coolExecute() const
{
    std::srand(std::time(NULL));

    if (std::rand() % 2 == 0)
        std::cout << this->Target << "robotomized successfull" << std::endl;
    else
        std::cout << this->Target << "robotomy failed" << std::endl;
}
