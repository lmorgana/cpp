#include "contact.hpp"

Contact::Contact()
{
	this->m_id = -1;
}

Contact::~Contact()
{

}

int	Contact::getId()
{
	return (this->m_id);
}

std::string	Contact::getStrByKey(const std::string key)
{
	if (key == "m_firstName")
		return (this->m_firstName);
	else if (key == "m_lastName")
		return (this->m_lastName);
	else if (key == "m_nickname")
		return (this->m_nickname);
	else if (key == "m_phoneNumber")
		return (this->m_phoneNumber);
	else if (key == "m_secret")
		return (this->m_secret);
	return ("");
}

void	Contact::set_contact(int id)
{
	this->m_id = id;

	std::cout << "first name   - ";
	std::cin >> this->m_firstName;

	std::cout << "last name    - ";
	std::cin >> this->m_lastName;

	std::cout << "nickname     - ";
	std::cin >> this->m_nickname;

	std::cout << "phone number - ";
	std::cin >> this->m_phoneNumber;

	std::cout << "your secret  - ";
	std::cin >> this->m_secret;
}
