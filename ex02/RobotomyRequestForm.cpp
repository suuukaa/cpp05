#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy), target(copy.target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    (void)copy;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (!getIsSigned())
        throw AForm::FormNotSignedException();
    if (!(executor.getGrade() <= getExecGrade()))
        throw AForm::GradeTooLowException();
    std::cout << "Waaaaaaaaaaaaaaaaaaaa3" << std::endl;

}