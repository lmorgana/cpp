
#include "Karen.hpp"

int	error_msg(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

void	print_msg(Karen& karen, std::string level)
{
	std::cout << "[ " << level << " ]" << std::endl;
	karen.complain(level);
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	int	i;
	Karen	karen;

	if (argc != 2)
		return (error_msg("Error:\nInvalid number of arguments"));
	std::string	level(argv[1]);
	std::string	strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = -1;
	while (i < 4 && strs[++i] != level)
		;
	switch (i) {
		case 0:
			print_msg(karen, "DEBUG");
		case 1:
			print_msg(karen, "INFO");
		case 2:
			print_msg(karen, "WARNING");
		case 3:
			print_msg(karen, "ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant "
						 "problems ]" << std::endl;
	}
	return (0);
}

