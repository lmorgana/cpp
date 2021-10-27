
#include "header.hpp"

int	ft_inf(std::string const &str1)
{
	if (ft_isItChar(str1))
		return (0);
	else if (ft_isItInt(str1))
		return (1);
	else if (ft_isItFloat(str1))
		return (2);
	else if (ft_isItDouble(str1))
		return (3);
	return (4);
}

void	for_char(std::string str1)
{
	char	ch;
	int		i;
	float	f;
	double	d;

	ch = (char) (*str1.c_str());
	i = static_cast<int> (ch);
	f = static_cast<float> (i);
	d = static_cast<double> (i);
	print_char(ch, f);
	print_int(i, f);
	print_f_d(d, f);
}

void	for_int(std::string str1)
{
	char	ch;
	int		i;
	float	f;
	double	d;

	i = std::stoi(str1);
	ch = static_cast<char> (i);
	f = static_cast<float> (i);
	d = static_cast<double> (i);
	print_char(ch, f);
	print_int(i, f);
	print_f_d(d, f);
}

float	ft_get_float(std::string str1)
{
	float	f;

	try
	{
		f = std::stof(str1);
	}
	catch (std::exception &e)
	{
		if (str1[0] != '-')
			f = std::numeric_limits<float>::infinity();
		else
			f = std::numeric_limits<float>::infinity() * -1;
	}
	return (f);
}

void	for_float(std::string str1)
{
	char	ch;
	int		i;
	float	f;
	double	d;

	f = ft_get_float(str1);
	i = static_cast<int> (f);
	d = static_cast<double> (f);
	ch = static_cast<char> (i);
	print_char(ch, f);
	print_int(i, f);
	print_f_d(d, f);
}

double 	ft_get_double(std::string str1)
{
	double 	d;

	try
	{
		d = std::stof(str1);
	}
	catch (std::exception &e)
	{
		if (str1[0] != '-')
			d = std::numeric_limits<float>::infinity();
		else
			d = std::numeric_limits<float>::infinity() * -1;
	}
	return (d);
}

void	for_double(std::string str1)
{
	char	ch;
	int		i;
	float	f;
	double	d;

	d = ft_get_double(str1);
	f = static_cast<float> (d);
	i = static_cast<int> (d);
	ch = static_cast<char> (i);
	print_char(ch, f);
	print_int(i, f);
	print_f_d(d, f);
}

void	for_nan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Error:\nlength of argument" << std::endl;
		return (1);
	}
	std::string str1(argv[1]);

	switch (ft_inf(str1))
	{
		case 0:
			for_char(str1);
			break;
		case 1:
			for_int(str1);
			break;
		case 2:
			for_float(str1);
			break;
		case 3:
			for_double(str1);
			break;
		default:
			for_nan();
	}
	return (0);
}
