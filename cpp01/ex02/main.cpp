
#include <iostream>

int	main(void)
{
	std::string	str1 = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str1;
	std::string &stringREF = str1;

	std::cout << "addres in memory of the string:" << &str1 << std::endl;
	std::cout << "addres by <stringPTR>:" << stringPTR << std::endl;
	std::cout << "addres by <stringREF>:" << &stringREF << std::endl;

	std::cout << "string using pointer:" << *stringPTR << std::endl;
	std::cout << "string using reference:" << stringREF << std::endl;
	return (0);
}

