#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "string"
#include <iostream>
#include <iomanip>

class	Contact
{
	private:
		int 		m_id;
		std::string	m_firstName;
		std::string m_lastName;
		std::string	m_nickname;
		std::string m_phoneNumber;
		std::string	m_secret;
	public:
		Contact();
		~Contact();
		std::string	getStrByKey(std::string key);
		int			getId();
		void		set_contact(int id);
};

#endif
