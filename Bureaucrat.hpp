#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		void decremenGrade();


};

#endif