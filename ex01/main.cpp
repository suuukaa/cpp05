#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b1("John Doe", 50);
        std::cout << b1 << std::endl;

        Bureaucrat b2("Jane Doe", 1);
        std::cout << b2 << std::endl;

        b2.incrementGrade();
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b3("Joe Bloggs", 150);
        std::cout << b3 << std::endl;

        b3.decrementGrade();
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b4("Alice", 2);
        std::cout << b4 << std::endl;
        b4.incrementGrade();
        std::cout << "After incrementing grade: " << b4 << std::endl;

        b4.decrementGrade();
        std::cout << "After decrementing grade: " << b4 << std::endl;

        b4.decrementGrade(); 
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
