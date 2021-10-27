#include "phonebook.h"

PhoneBook::PhoneBook()
{
	this->len = 0;
}

PhoneBook::~PhoneBook()
{

}

std::string	PhoneBook::ft_sw(const std::string str1)
{
	std::string	cp;

	cp = str1.substr(0, 10);
	if (str1.length() > 10)
		cp[9] = '.';
	return (cp);
}

void	PhoneBook::ft_print_line(std::string s1, std::string s2,
					  std::string s3, std::string s4)
					  {
	std::cout << std::setw(10) << this->ft_sw(s1) << "|"
	<< std::setw(10) << this->ft_sw(s2) << "|"
	<< std::setw(10) << this->ft_sw(s3) << "|"
	<< std::setw(10) << this->ft_sw(s4) << "|" << std::endl;
					  }

int		PhoneBook::get_min()
{
	int i;
	int	index;
	int	min;
	int min_pos;

	i = -1;
	min = this->cont[0].getId();
	min_pos = 0;
	while (++i < 8)
	{
		index = this->cont[i].getId();
		if (index == -1)
			return (i);
		else if (index < min)
		{
			min = index;
			min_pos = i;
		}
	}
	return (min_pos);
}

void	PhoneBook::add_cont()
{
	this->cont[this->get_min()].set_contact(++this->len);
}

int	PhoneBook::showAll()
{
	int i;

	this->ft_print_line("index", "First name", "Last name", "Nickname");
	i = -1;
	while (++i < 8 && this->cont[i].getId() != -1)
	{
		this->ft_print_line(std::to_string(i + 1),
					  this->cont[i].getStrByKey("m_firstName"),
					  this->cont[i].getStrByKey("m_lastName"),
					  this->cont[i].getStrByKey("m_nickname"));
	}
	if (i == 0)
		this->ft_print_line("empy", "empy", "empy", "empy");
	return (i);
}

void	PhoneBook::showByIndex(int index)
{
	if (index < 0 || index > 7 || this->cont[index].getId() == -1)
		std::cout << "Contact not found" << std::endl;
	else
	{
		std::cout << "First Name:" <<
		this->cont[index].getStrByKey("m_firstName") << std::endl;

		std::cout << "Last Name:" <<
		this->cont[index].getStrByKey("m_lastName") << std::endl;

		std::cout << "Nickname:" <<
		this->cont[index].getStrByKey("m_nickname") << std::endl;

		std::cout << "PhoneNumber:" <<
		this->cont[index].getStrByKey("m_phoneNumber") << std::endl;

		std::cout << "Secret:" <<
		this->cont[index].getStrByKey("m_secret") << std::endl;
	}
}
