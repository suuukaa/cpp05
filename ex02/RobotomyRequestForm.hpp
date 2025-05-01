#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

    std::string target;

    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

        void execute(Bureaucrat const &executor) const ;
}

#endif