#include "phonebook.h"

int	ft_search(PhoneBook pb)
{
	int	index;

	if (pb.showAll() > 0)
	{
		std::cout << "Enter index of contact to see more: ";
		std::cin >> index;
		if (!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		pb.showByIndex(index - 1);
	}
	return (1);
}

int	main()
{
	PhoneBook pb;
	std::string cmd;

	while (1)
	{
		std::cout << "Enter command(EXIT, ADD, SEARCH): ";
		std::cin >> cmd;
		if (std::cin.eof())
				break;
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
		{
			std::cout << std::endl << "Fill the fields below: " << std::endl;
			pb.add_cont();
		}
		else if (cmd == "SEARCH")
			ft_search(pb);
	}
	return (0);
}

