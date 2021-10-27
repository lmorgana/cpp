#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const& other);
	~Intern();
	Intern& operator=(Intern const &other);
	Form* makeForm(std::string name_form, std::string target_form);

	class	UnkownTypeOfForm : public std::exception
	{
	private:
		const	std::string	m_msg;

	public:
		UnkownTypeOfForm(std::string const &msg) throw() : m_msg(msg) {};
		~UnkownTypeOfForm() throw() {};
		const	char*	what() const throw();
	};
};

#endif
