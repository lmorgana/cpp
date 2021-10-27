#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : m_weapon(weapon)
{
	this->m_name = name;
}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	HumanA::printUpper(this->m_name);
	std::cout << " attacks with his ";
	HumanA::printUpper(this->m_weapon.getType());
	std::cout << std::endl;
}

void	HumanA::printUpper(std::string str1)
{
	int	i;

	i = -1;
	while (str1[++i] != '\0')
		std::cout << (char) std::toupper(str1[i]);
}
