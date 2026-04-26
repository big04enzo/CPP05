#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
