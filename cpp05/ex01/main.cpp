
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>


int main(void)
{
	try
	{
		Bureaucrat br("Oleg", 1);
		Form		form ("form", 8, 149);

		std::cout << br << std::endl;
		std::cout << form << std::endl;
		br.signForm(form);
		std::cout << form << std::endl;
		br.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
