#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){
	if (this != &copy)
		grade = copy.grade;
	return *this;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){};

const std::string& Bureaucrat::getName() const{
	return name;
}

int Bureaucrat::getGrade() const{
	return grade;
}

void Bureaucrat::incrementGrade(){
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade(){
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too High";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b){
	out << b.getName() << ", Bureaucrat grade " << b.getGrade();
	return out;
}
