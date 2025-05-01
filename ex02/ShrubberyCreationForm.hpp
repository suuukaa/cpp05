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

    void execute(Bureaucrat const &executor) const;
};

#endif