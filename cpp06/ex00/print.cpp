
#include "header.hpp"

void	print_char(char ch, float f)
{
	std::cout << "char: ";
	if (std::isprint(f))
		std::cout << ch;
	else if (std::isinf(f) || std::isnan(f))
		std::cout << "impossible";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	print_int(int i, float f)
{
	std::cout << "int: ";
	if (f > float (2147483647) || f < float(-2147483648) || std::isnan(f))
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	print_f_d(double d, float f)
{
	float	frac;
	float	integral;

	frac = std::modf(f, &integral);
	if (frac == 0)
	{
		std::cout << std::fixed;
		std::cout.precision(1);
	}
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
