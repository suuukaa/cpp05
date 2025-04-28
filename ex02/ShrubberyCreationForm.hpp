#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>

class ShrubberyCreationForm : public AForm{

    std::String target;

    public :
    ShrubberyCreationForm();
    ~ShrubberyCreationFor();
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm operator=(const ShrubberyCreationForm &copy);

    void execute() const;
};

#endif