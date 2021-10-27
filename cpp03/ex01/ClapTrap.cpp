
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	m_name = "no_name";
	m_hitPoints = 10;
	m_eneryPoints = 10;
	m_attackDamage = 0;
	std::cout << "Default <ClapTrap> constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	m_name = name;
	m_hitPoints = 10;
	m_eneryPoints = 10;
	m_attackDamage = 0;
	std::cout << "Default <ClapTrap> constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other)
{
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_eneryPoints = other.m_eneryPoints;
	m_attackDamage = other.m_attackDamage;
	std::cout << "Copy <ClapTrap> constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<ClapTrap> Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_eneryPoints = other.m_eneryPoints;
	m_attackDamage = other.m_attackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	unsigned int tmp(m_eneryPoints);

	if (m_eneryPoints - m_attackDamage >= 0)
	{
		m_eneryPoints -= m_attackDamage;
		std::cout << "<" << m_name << "> attack <" << target << ">, causing <"
		<< m_attackDamage << "> points of damage! (" << tmp << "EN -> "
		<< m_eneryPoints << "EN)" << std::endl;
	}
	else
	{
		std::cout << "<" << m_name << "> need more energy to attack"
														<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	tmp(m_hitPoints);

	if (m_hitPoints - amount >= 0)
		m_hitPoints -= amount;
	else
		m_hitPoints = 0;
	std::cout << "<" << m_name << "> is attacked "
	<< tmp << "(HP -> " << m_hitPoints << "HP)" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int tmp(m_hitPoints);

	m_hitPoints += amount;
	std::cout << "<" << m_name << "> is repaired "
	<< tmp << "(HP -> " << m_hitPoints << "HP)" << std::endl;
}
