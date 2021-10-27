
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->m_name = "no_name";
	this->m_hitPoints = 100;
	this->m_eneryPoints = 50;
	this->m_attackDamage = 20;
	std::cout << "Default <ScavTrap> constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->m_name = name;
	this->m_hitPoints = 100;
	this->m_eneryPoints = 50;
	this->m_attackDamage = 20;
	std::cout << "Default <ScavTrap> constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	this->m_name = other.m_name;
	this->m_hitPoints = 100;
	this->m_eneryPoints = 50;
	this->m_attackDamage = 20;
	std::cout << "Copy  <ScavTrap> constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<ScavTrap> Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->m_name = other.m_name;
	this->m_hitPoints = other.m_hitPoints;
	this->m_eneryPoints = other.m_eneryPoints;
	this->m_attackDamage = other.m_attackDamage;
	return (*this);
}

void	 ScavTrap::attack(std::string const& target)
{
	unsigned int tmp(m_eneryPoints);

	if (m_eneryPoints - m_attackDamage >= 0)
	{
		m_eneryPoints -= m_attackDamage;
		std::cout << "<" << m_name << "> hit by leg <" << target << ">, causing <"
		<< m_attackDamage << "> points of damage! (" << tmp << "EN -> "
		<< m_hitPoints << "EN)" << std::endl;
	}
	else
	{
		std::cout << "<" << m_name << "> need more energy to attack"
		<< std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "<" << m_name << "> in Gate keeper mode." << std::endl;
}
