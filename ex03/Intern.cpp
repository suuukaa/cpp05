#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(){}

Intern::Intern(const Intern &copy){}

Intern &Intern::operator=(const Intern &copy){
    return *this;
}

Intern::~Intern(){}

AForm* Intern::createPardon(const std::string &target){
    return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomy(const std::string &target){
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubbery(const std::string &target){
    return new ShrubberyCreationForm(target);
}    

AForm* Intern::makeForm(std::string const &formName, std::string const &target){
        
    const std::string words[3] = {"shrubbery creation",
            "robotomy request", "presidential pardon"};
        
    void (Intern::*func[])() = {&Intern::createPardon, &Intern::createPardon, &Intern::createShrubbery};

    for (int i = 0; i < 3; i++){
        if (formName == words[i]){
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*func[i]());
        }
    }
    std::cout << "Intern couldn't find the requested form: " << formName << std::endl;
}
