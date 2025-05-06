#ifndef AFORM_HPP
#define AFORM_HPP

#include <cstdlib>
#include <iostream>
#include <fstream>

#include "Bureaucrat.hpp"

class AForm{

	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

	public :
		AForm();
		AForm(const AForm &copy);
		AForm(const std::string& name, int gradeToSign, int gradeToExecute);
		AForm &operator=(const AForm &copy);
		virtual ~AForm();

		const std::string& getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(const Bureaucrat& b);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
		
		class FormNotSignedException : public std::exception {
			const char* what() const throw();
		};

		void virtual execute(Bureaucrat const &executor) const = 0;
		
};

std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif
