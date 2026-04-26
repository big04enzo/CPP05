#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(const std::string& target);
    virtual ~RobotomyRequestForm();
    void execute(const Bureaucrat& executor) const;
private:
    std::string target;
};

#endif
