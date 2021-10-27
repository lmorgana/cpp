#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			j = -1;
			while (argv[i][++j] != '\0')
				std::cout << (char) toupper(argv[i][j]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}