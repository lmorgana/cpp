
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardonForm", 25, 5)
{
	m_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) :
Form (other)
{
	m_target = other.m_target;
	m_isSigned = other.m_isSigned;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &other)
{
	m_target = other.m_target;
	m_isSigned = other.m_isSigned;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (m_isSigned == false)
		throw Form::GradeTooLowException("form is unsigned");
	if (m_gradeToExc <= executor.getGrade())
		throw Form::GradeTooLowException("grade too low");
	else
	{
		std::cout << "<" << m_target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}


