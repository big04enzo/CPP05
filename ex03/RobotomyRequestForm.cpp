#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    std::cout << "Bzzzz... drilling noises...\n";
    std::srand(std::time(0));
    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully!\n";
    else
        std::cout << target << " robotomy failed!\n";
}
