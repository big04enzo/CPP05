#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat bob("Bob", 1);
		Bureaucrat jim("Jim", 50);
		Bureaucrat tim("Tim", 140);

		PresidentialPardonForm ppf("Arthur Dent");
		RobotomyRequestForm rrf("Marvin");
		ShrubberyCreationForm scf("Earth");

		std::cout << "\n--- Signing Forms ---\n";
		bob.signForm(ppf);
		jim.signForm(rrf);
		tim.signForm(scf);

		std::cout << "\n--- Executing Forms ---\n";
		bob.executeForm(ppf);
		jim.executeForm(rrf);
		tim.executeForm(scf);

		std::cout << "\n--- Trying to execute unsigned form ---\n";
		PresidentialPardonForm notSigned("Ford Prefect");
		jim.executeForm(notSigned);
	} catch (std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
