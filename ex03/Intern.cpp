#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(){}

Intern::Intern(const Intern &copy){}

Intern &Intern::operator=(const Intern &copy){}

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
           const std::string
    }
