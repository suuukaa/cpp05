#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
    gradeToSign = 145;
    gradeToExecute = 137;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy){}

ShrubberyCreationForm::execute(Bureaucrat const & executor){
    
}