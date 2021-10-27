
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


int main(void)
{
	try
	{
		Bureaucrat br("Oleg", 4);
//		ShrubberyCreationForm	form("home");
//		RobotomyRequestForm		form("home");
		PresidentialPardonForm	form("home");


		br.signForm(form);
		br.executeForm(form);
//		std::cout << br << std::endl;
//		std::cout << form << std::endl;
//		br.signForm(form);
//		std::cout << form << std::endl;
//		br.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
