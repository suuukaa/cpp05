#include "AForm.hpp"

AForm::AForm() : name("Default"), gradeToSign(1), gradeToExecute(155) {}

AForm::AForm(const AForm &copy): name(copy.name), isSigned(copy.isSigned),
    gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute){}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute): name(name), isSigned(!isSigned),
    gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
        if (gradeToExecute < 1 || gradeToSign < 1)
            throw GradeTooHighException();
        else if(gradeToExecute > 150 || gradeToSign > 150)
            throw GradeTooLowException();
}

AForm &AForm::operator=(const AForm &copy){
    if (this != &copy)
        isSigned = copy.isSigned;
    return *this;
}

AForm::~AForm(){};

const std::string &AForm::getName() const{
    return name;
}

bool AForm::getIsSigned() const{
    return isSigned;
}

int AForm::getGradeToExecute() const{
    return gradeToExecute;
}

int AForm::getGradeToSign() const{
    return gradeToSign;
}

void AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw(){
    return "Grade is too High";
}

const char* AForm::GradeTooLowException::what() const throw(){
    return "Grade is too Low";
}

const char* AForm::FormNotSignedException::what() const throw () {
    return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
    out << f.getName()
        << ", Sign Grade: " << f.getGradeToSign()
        << ", Exec Grade: " << f.getGradeToExecute()
        << ", Signed: " << (f.getIsSigned() ? "Yes" : "No");
    return out;
}
