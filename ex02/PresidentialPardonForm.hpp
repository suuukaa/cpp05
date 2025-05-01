#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

    std::string target;

    public :
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
        PresidentialPardonForm(const std::string &target);

        void execute(Bureaucrat const &executor) const ;
};

#endif