#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}
Intern::Intern(const Intern&) {}
Intern& Intern::operator=(const Intern&) { return *this; }
Intern::~Intern() {}

Form* Intern::makeForm(const std::string& formName, const std::string& target) {
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form* forms[3] = {
        new ShrubberyCreationForm(target),
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target)
    };
    for (int i = 0; i < 3; ++i) {
        if (formName == names[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            for (int j = 0; j < 3; ++j) if (j != i) delete forms[j];
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << formName << std::endl;
    for (int j = 0; j < 3; ++j) delete forms[j];
    return NULL;
}
