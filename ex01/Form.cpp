#include "Form.hpp"

Form::Form() : name("Default"), gradeToSign(1), gradeToExecute(155) {}

Form::Form(const Form &copy): name(copy.name), isSigned(copy.isSigned),
    gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute){}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute): name(name), isSigned(!isSigned),
    gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
        if (gradeToExecute < 1 || gradeToSign < 1)
            throw GradeTooHighException();
        else if(gradeToExecute > 150 || gradeToSign > 150)
            throw GradeTooLowException();
}

Form &Form::operator=(const Form &copy){
    if (this != &copy)
        isSigned = copy.isSigned;
    return *this;
}

Form::~Form(){};

const std::string &Form::getName() const{
    return name;
}

bool Form::getIsSigned() const{
    return isSigned;
}

int Form::getGradeToExecute() const{
    return gradeToExecute;
}

int Form::getGradeToSign() const{
    return gradeToSign;
}

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > getGradeToSign())
        throw GradeTooLowException();
    isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Grade is too High";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade is too Low";
}

std::ostream &operator<<(std::ostream &out, const Form &f)
{
    out << f.getName()
        << ", Sign Grade: " << f.getGradeToSign()
        << ", Exec Grade: " << f.getGradeToExecute()
        << ", Signed: " << (f.getIsSigned() ? "Yes" : "No");
    return out;
}
