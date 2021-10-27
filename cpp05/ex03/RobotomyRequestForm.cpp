
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("RobotomyRequestForm", 72, 45)
{
	m_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) :
Form (other)
{
	m_target = other.m_target;
	m_isSigned = other.m_isSigned;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	m_target = other.m_target;
	m_isSigned = other.m_isSigned;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (m_isSigned == false)
		throw Form::GradeTooLowException("form is unsigned");
	if (m_gradeToExc < executor.getGrade())
		throw Form::GradeTooLowException("grade too low");
	else
	{
		int rand;

		srand(time(NULL));
		rand = std::rand() % 2;
		std::cout << "* make some drilling noises *" << std::endl;
		std::cout << "<" << m_target << "> has been robotomized ";
		if (rand)
			std::cout << "succefully" << std::endl;
		else
			std::cout << "unsuccessful" << std::endl;
	}
}

