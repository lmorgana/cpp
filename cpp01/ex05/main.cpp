
#include "Karen.hpp"

int	main(void)
{
	Karen karen;

	std::cout << "Test with DEBUG:" << std::endl;
	karen.complain("DEBUG");
	std::cout << "----------------" << std::endl << std::endl;

	std::cout << "Test with INFO:" << std::endl;
	karen.complain("INFO");
	std::cout << "----------------" << std::endl << std::endl;

	std::cout << "Test with WARNING:" << std::endl;
	karen.complain("WARNING");
	std::cout << "----------------" << std::endl << std::endl;

	std::cout << "Test with ERROR:" << std::endl;
	karen.complain("ERROR");
	std::cout << "----------------" << std::endl << std::endl;

	std::cout << "Test with SOMETHING:" << std::endl;
	karen.complain("SOMETHING");
	std::cout << "----------------" << std::endl << std::endl;

	return (0);
}

