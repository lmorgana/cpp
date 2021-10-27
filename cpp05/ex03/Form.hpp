#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
protected:
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
	const std::string&	getName() const;
	bool	getIsSigned() const;
	int	getGradeToSigned() const;
	int	getGradeToExc() const;
	virtual	void execute(Bureaucrat const &executor) const = 0;

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
