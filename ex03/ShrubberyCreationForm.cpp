#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationAForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw AForm::AFormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::ofstream ofs((target + "_shrubbery").c_str());
    ofs << "      /\\\n     /  \\\n    /++++\\\n   /  ()  \\\n   /      \\\n  /~`~`~`~`\\\n      | |\n";
    ofs.close();
}
