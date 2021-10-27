
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->m_name = "no_name";
	this->m_hitPoints = 100;
	this->m_eneryPoints = 100;
	this->m_attackDamage = 30;
	std::cout << "Default <FragTrap> constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->m_name = name;
	this->m_hitPoints = 100;
	this->m_eneryPoints = 100;
	this->m_attackDamage = 30;
	std::cout << "Default <FragTrap> constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	this->m_name = other.m_name;
	this->m_hitPoints = 100;
	this->m_eneryPoints = 100;
	this->m_attackDamage = 30;
	std::cout << "Copy  <ScavTrap> constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "<FragTrap> Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	this->m_name = other.m_name;
	this->m_hitPoints = other.m_hitPoints;
	this->m_eneryPoints = other.m_eneryPoints;
	this->m_attackDamage = other.m_attackDamage;
	return (*this);
}

void	FragTrap::attack(std::string const& target)
{
	unsigned int tmp(m_eneryPoints);

	if (m_eneryPoints - m_attackDamage >= 0)
	{
		m_eneryPoints -= m_attackDamage;
		std::cout << "<" << m_name << "> hit by pencil <" << target << ">, causing <"
		<< m_attackDamage << "> points of damage! (" << tmp << "EN -> "
		<< m_eneryPoints << "EN)" << std::endl;
	}
	else
	{
		std::cout << "<" << m_name << "> need more energy to attack"
		<< std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "<" << m_name << "> highFivesGuys work" << std::endl;
}
