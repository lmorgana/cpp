
#include "header.hpp"

bool	ft_isAllDigit(char const *str1, int n)
{
	int i;

	if (std::isdigit(str1[0]) || (str1[0] == '-' || str1[0] == '+'))
	{
		i = 0;
		while (str1[++i] != '\0' && i < n)
		{
			if (std::isdigit(str1[i]) == 0)
				return (false);
		}
		if (i == 1 && !std::isdigit(str1[0]))
			return (false);
		return (true);
	}
	return (false);
}

bool	ft_isAllFloat(char const *str1, int n)
{
	int i;
	int	dot;

	dot = 0;
	if (std::isdigit(str1[0]) || (str1[0] == '-' || str1[0] == '+'))
	{
		i = 0;
		while (str1[++i] != '\0' && i < n)
		{
			if (std::isdigit(str1[i]) == 0)
			{
				if (str1[i] == '.' && ((int) n - 1) != i)
					dot++;
				else
					return (false);
			}
		}
		if ((i != 1 || std::isdigit(str1[0])) && (dot == 1))
			return (true);
	}
	return (false);
}

bool	ft_isItChar(std::string const &str1)
{
	return (str1.length() == 1 && std::isalpha(str1[0]));
}

bool	ft_isItInt(std::string const &str1)
{
	int n;

	if (ft_isAllDigit(str1.c_str(), (int) str1.length()))
	{
		try
		{
			n = std::stoi(str1);
			return (true);
		}
		catch (std::exception &e)
		{
			(void) e;
		}
	}
	return (false);
}

bool	ft_isItFloat(std::string const &str1)
{
	if (str1 == "+inff" || str1 == "-inff" || str1 == "nanf")
		return (true);
	if (ft_isAllFloat(str1.c_str(), (int) str1.length() - 1) && str1.c_str()[str1.length() - 1] == 'f')
	{
		return (true);
	}
	return (false);
}

bool	ft_isItDouble(std::string const &str1)
{
	if (str1 == "+inf" || str1 == "-inf" || str1 == "nan")
		return (true);
	if (ft_isAllFloat(str1.c_str(), (int) str1.length()))
	{
		return (true);
	}
	return (false);
}
