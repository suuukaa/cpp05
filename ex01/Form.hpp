#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form{

	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

	public :
		Form();
		Form(const Form &copy);
		Form(const std::string& name, int gradeToSign, int gradeToExecute);
		Form &operator=(const Form &copy);
		~Form();

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
		
};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif