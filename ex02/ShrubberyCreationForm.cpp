#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    std::ofstream ofs(target + "_shrubbery");
    ofs << "      /\\\n     /  \\\n    /++++\\\n   /  ()  \\\n   /      \\\n  /~`~`~`~`\\\n      | |\n";
    ofs.close();
}
