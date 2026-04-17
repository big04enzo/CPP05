#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(const std::string& target);
    virtual ~PresidentialPardonForm();
    void execute(const Bureaucrat& executor) const;
private:
    std::string target;
};

#endif
