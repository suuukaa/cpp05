#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

class Bureaucrat{

	const std::string name;
	int grade;

	public :
		Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat &operator=(const Bureaucrat& copy);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();

		const std::string& getName() const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();
		
		void signForm(Form &f);

		class GradeTooHighException : public std::exception{
			public :
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public :
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#include "Form.hpp"

#endif