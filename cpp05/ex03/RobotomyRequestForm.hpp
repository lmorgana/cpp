#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string m_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm& other);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(RobotomyRequestForm& other);
	void execute(Bureaucrat const &executor) const;
};

#endif
