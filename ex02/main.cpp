#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    try {
        Bureaucrat a("Alice", 1);
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robo("Bob");
        PresidentialPardonForm pardon("Charlie");
        a.signForm(shrub);
        a.signForm(robo);
        a.signForm(pardon);
        a.executeForm(shrub);
        a.executeForm(robo);
        a.executeForm(pardon);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
