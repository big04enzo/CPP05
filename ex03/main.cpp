#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Intern.hpp"

int main() {
	try {
	Intern someRandomIntern;
	Bureaucrat a("marwan",30);
	a.decrementGrade();
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
