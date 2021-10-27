#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->m_weapon = NULL;
	this->m_name = name;
}

HumanB::~HumanB(void)
{

}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->m_weapon = &weapon;
}

void	HumanB::attack(void)
{
	HumanB::printUpper(this->m_name);
	std::cout << " attacks with his ";
	HumanB::printUpper((*this->m_weapon).getType());
	std::cout << std::endl;
}

void	HumanB::printUpper(std::string str1)
{
	int	i;

	i = -1;
	while (str1[++i] != '\0')
		std::cout << (char) std::toupper(str1[i]);
}


