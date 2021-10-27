#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string m_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm& other);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(PresidentialPardonForm& other);
	void execute(Bureaucrat const &executor) const;
};

#endif
