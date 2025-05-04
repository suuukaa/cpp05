#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    Intern someRandomIntern;
    AForm* form;

    std::cout << "\n--- Test 1: Create ShrubberyCreationForm ---" << std::endl;
    form = someRandomIntern.makeForm("shrubbery creation", "Home");
    if (form)
        delete form;

    std::cout << "\n--- Test 2: Create RobotomyRequestForm ---" << std::endl;
    form = someRandomIntern.makeForm("robotomy request", "Bender");
    if (form)
        delete form;

    std::cout << "\n--- Test 3: Create PresidentialPardonForm ---" << std::endl;
    form = someRandomIntern.makeForm("presidential pardon", "Rick");
    if (form)
        delete form;

    std::cout << "\n--- Test 4: Invalid Form ---" << std::endl;
    form = someRandomIntern.makeForm("invalid form name", "NoTarget");
    if (form)
        delete form;

    return 0;
}
