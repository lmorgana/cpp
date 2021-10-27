
#include "header.hpp"

int	errorMsg(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

int	check_args(char **argv)
{
	if (argv[0] && argv[1])
	{
		if (argv[0][0] != '\0' && argv[1][0] != '\0')
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (errorMsg("Error:\nNumber of argument"));
	if (check_args(&argv[2]) == 0)
		return (errorMsg("Error:\ninvalid argument"));

	ft_replace( argv[1], std::string(argv[2]), std::string(argv[3]));
}
