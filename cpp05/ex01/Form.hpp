#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
private:
	bool				m_isSigned;
	const	std::string	m_name;
	const	int			m_gradeToSign;
	const	int 		m_gradeToExc;

public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExc);
	Form(const Form& other);
	~Form();
	Form& operator=(const Form& other);
	void beSigned(Bureaucrat& burr);
	const std::string&	getName();
	bool	getIsSigned();
	int	getGradeToSigned();
	int	getGradeToExc();

	class	GradeTooHighException : public std::exception
	{
	private:
		const	std::string	m_msg;

	public:
		GradeTooHighException(std::string const &msg) throw() : m_msg(msg) {};
		~GradeTooHighException() throw() {};
		const	char*	what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
	private:
		const	std::string	m_msg;

	public:
		GradeTooLowException(std::string const &msg) throw() : m_msg(msg) {};
		~GradeTooLowException() throw() {};
		const	char*	what() const throw();
	};

};

std::ostream&	operator<<(std::ostream& os, Form& form);

#endif
