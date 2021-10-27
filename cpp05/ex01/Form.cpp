
#include "Form.hpp"

Form::Form() : m_isSigned(false), m_name("none"), m_gradeToSign(150), m_gradeToExc(150) {};

Form::Form(std::string name, int gradeToSign, int gradeToExc) :
m_name(name), m_gradeToSign(gradeToSign), m_gradeToExc(gradeToExc)
{
	if (m_gradeToSign > 150 || m_gradeToExc > 150)
		throw GradeTooLowException("Grade to sign and execute form can't be lower then 150");
	if (m_gradeToSign < 1 || m_gradeToExc < 1)
		throw GradeTooLowException("Grade to sign and execute form can't be higher then 1");
	m_isSigned = false;
}

Form::Form(const Form &other) : m_name(other.m_name),
m_gradeToSign(other.m_gradeToSign), m_gradeToExc(other.m_gradeToExc)
{
	m_isSigned = other.m_isSigned;
}

Form::~Form()
{

}

Form& Form::operator=(const Form &other)
{
	m_isSigned = other.m_isSigned;
	return (*this);
}

const std::string&	Form::getName()
{
	return (m_name);
}

bool	Form::getIsSigned()
{
	return (m_isSigned);
}

int	Form::getGradeToSigned()
{
	return (m_gradeToSign);
}

int	Form::getGradeToExc()
{
	return (m_gradeToExc);
}

const	char*	Form::GradeTooHighException::what() const throw()
{
	return (m_msg.c_str());
}

const	char*	Form::GradeTooLowException::what() const throw()
{
	return (m_msg.c_str());
}

void Form::beSigned(Bureaucrat &burr)
{
	if (m_isSigned == true)
		throw Form::GradeTooLowException("form is already signed");
	if (m_gradeToSign < burr.getGrade())
		throw Form::GradeTooLowException("grade too low");
	else
		m_isSigned = true;
}

std::ostream&	operator<<(std::ostream& os, Form& form)
{
	os << "Form name: " << form.getName() <<
	"\nisSigned: " << form.getIsSigned() <<
	"\nGrade to sign: " << form.getGradeToSigned() <<
	"\nGrade to excecute: " << form.getGradeToExc();
	return (os);
}
