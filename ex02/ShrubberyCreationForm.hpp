#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>

class ShrubberyCreationForm : public AForm{

    std::string target;

    public :
    ShrubberyCreationForm();
    ~ShrubberyCreationFor();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm operator=(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm(const std::string target);

    void execute(Bureaucrat const &executor) const;
};

#endif