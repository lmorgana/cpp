
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat br("Oleg", 10);

		std::cout << br << std::endl;
		br.plusGrade(-9);
		std::cout << br << std::endl;
		br.minusGrade(11);
		std::cout << br << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
