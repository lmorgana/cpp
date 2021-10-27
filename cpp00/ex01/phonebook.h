#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
	private:
		int		len;
		Contact	cont[8];
	public:
		PhoneBook();
		~PhoneBook();
		void		add_cont();
		int			get_min();
		int			showAll();
		void		showByIndex(int index);
		std::string	ft_sw(const std::string str1);
		void		ft_print_line(std::string s1, std::string s2,
							  std::string s3, std::string s4);
};

#endif