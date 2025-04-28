#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default"){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy), target(target,copy){}

ShrubberyCreationForm::execute() const {
    std::string target_file = this->target + _shrubbery;
    std::ofstream file(target_file.c_str);

    if (file.fail()){
        std::cout << "oops file isn't open :)" << std::endl;
        return ;}
    else{

    ofs << "      /\\      " << std::endl;
    ofs << "     /\\*\\     " << std::endl;
    ofs << "    /\\O\\*\\    " << std::endl;
    ofs << "   /*/\\/\\/\\   " << std::endl;
    ofs << "  /\\O\\/\\*\\/\\  " << std::endl;
    ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    ofs << "      ||      " << std::endl;
    ofs << "      ||      " << std::endl;
    ofs << "      ||      " << std::endl;
    }
    file.close();
}
