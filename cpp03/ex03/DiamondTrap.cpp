
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	m_name = "no_name";
	ClapTrap::m_name = m_name + "_clap_name";
	m_hitPoints = 100;
	m_eneryPoints = 50;
	m_attackDamage = 30;
	std::cout << "Default <DiamondTrap> constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	m_name = name;
	ClapTrap::m_name = m_name + "_clap_name";
	m_hitPoints = 100;
	m_eneryPoints = 50;
	m_attackDamage = 30;
	std::cout << "Default <DiamondTrap> constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other)
{
	m_name = other.m_name;
	ClapTrap::m_name = other.m_name + "_clap_name";
	m_hitPoints = other.m_hitPoints;
	m_eneryPoints = other.m_eneryPoints;
	m_attackDamage = other.m_attackDamage;
	std::cout << "Copy <DiamondTrap> constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "<DiamondTrap> Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
	m_name = other.m_name;
	m_hitPoints = other.m_hitPoints;
	m_eneryPoints = other.m_eneryPoints;
	m_attackDamage = other.m_attackDamage;
	return (*this);
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "MY <DiamondTrap> NAME IS '" << m_name << "'"
	<< std::endl;

	std::cout << "MY <ClapTrap> NAME IS '" << ClapTrap::m_name << "'"
	<< std::endl;
}
