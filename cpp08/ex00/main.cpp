
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v = {7, 5, 16, 8};

	v.push_back(4);
	v.push_back(13);

	std::cout << "v = { ";
	for (int i = 0; i < 6; i++)
		std::cout << v[i] << ", ";
	std::cout << "}; \n";

	try
	{
		std::vector<int>::iterator nt = easyfind(&v, 7);
		std::cout << *nt << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator nt = easyfind(&v, 0);
		std::cout << *nt << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
