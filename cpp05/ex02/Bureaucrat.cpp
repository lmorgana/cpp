
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("none"), m_grade(150)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : m_name(other.m_name)
{
	m_grade = other.m_grade;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &other)
{
	m_grade = other.m_grade;
	return (*this);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& other)
{
	os << "Name: " << other.getName() << ", Grade: " << other.getGrade();
	return (os);
}

int	Bureaucrat::getGrade(void) const
{
	return (m_grade);
}

std::string Bureaucrat::getName(void) const
{
	return (m_name);
}

void	Bureaucrat::plusGrade(int grade)
{
	if (grade < 0 && grade != -2147483648)
		grade *= -1;
	else if (grade == -2147483648)
		grade = 2147483647;
	if (m_grade - grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade -= grade;
}

void	Bureaucrat::minusGrade(int grade)
{
	if (grade < 0 && grade != -2147483648)
		grade *= -1;
	else if (grade == -2147483648)
		grade = 2147483647;
	if (m_grade + grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade += grade;
}

const	char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat error: grade can't be higher then 1");
}

const	char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat error: grade can't be lower then 150");
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "<" << this->getName() << "> signs <" <<
		form.getName() << ">" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "<" << this->getName() << "> cannot sign <" <<
		form.getName() << "> because <" << e.what() << ">" << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "<" << this->getName() << "> executes <" <<
		form.getName() << ">" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "<" << this->getName() << "> cannot execute <" <<
		form.getName() << "> because <" << e.what() << ">" << std::endl;
	}
}
