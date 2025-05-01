
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm shrub("Garden");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Arthur Dent");

        boss.signForm(shrub);
        boss.executeForm(shrub);

        boss.signForm(robot);
        boss.executeForm(robot);

        boss.signForm(pardon);
        boss.executeForm(pardon);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
