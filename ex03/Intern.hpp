#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern{

    AForm* createShrubbery(const std::string &target);
    AForm* createRobotomy(const std::string &target);
    AForm* createPardon(const std::string &target);

    public :
        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        ~Intern();

        AForm* makeForm(std::string const &formName, std::string const &target);

};

#endif