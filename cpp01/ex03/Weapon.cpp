#include "Weapon.hpp"

Weapon::Weapon()
{
	this->m_type = "no_type";
}

Weapon::Weapon(std::string newType)
{
	this->m_type = newType;
}

Weapon::~Weapon()
{

}

void	Weapon::setType(std::string newType)
{
	this->m_type = newType;
}

const	std::string&	Weapon::getType(void)
{
	const std::string &str1 = this->m_type;

	return (str1);
}
