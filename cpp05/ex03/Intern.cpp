
#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other)
{
	(void) other;
}

Intern::~Intern() {}

Intern& Intern::operator=(Intern const &other)
{
	(void) other;
	return (*this);
}

const char *Intern::UnkownTypeOfForm::what() const throw()
{
	return (m_msg.c_str());
}

Form* Intern::makeForm(std::string name_form, std::string target_form)
{
	int i;
	std::string arr_names[3] = {"president pardon", "robotomy request", "shrubbery creation"};

	i = -1;
	while (++i < 3 && arr_names[i] != name_form)
		;
	switch (i)
	{
		case 0:
			std::cout << "Intern creates <PresidentialPardonForm>" << std::endl;
			return (new PresidentialPardonForm(target_form));
		case 1:
			std::cout << "Intern creates <RobotomyRequestForm>" << std::endl;
			return (new RobotomyRequestForm(target_form));
		case 2:
			std::cout << "Intern creates <ShrubberyCreationForm>" << std::endl;
			return (new ShrubberyCreationForm(target_form));
		default:
			throw  UnkownTypeOfForm("Uknown type of form");
	}
}
