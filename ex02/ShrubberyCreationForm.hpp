#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>

class ShrubberyCreationForm : public AForm{

    public :
    ShrubberyCreationForm();
    ~ShrubberyCreationFor();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm operator=(const ShrubberyCreationForm &copy);

    void execute(Bureaucrat const & executor);
};

#endif