#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->m_name = "noname";
	std::cout << "<" << this->m_name << "> was created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->m_name = name;
	std::cout << "<" << this->m_name << "> was created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->m_name << "> was destroyed" << std::endl;
}

void	Zombie::setName(std::string name)
{
	std::string	oldName;

	oldName = this->m_name;
	this->m_name = name;
	std::cout << "<" << oldName << "> is " << this->m_name << " now" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->m_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
