#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
protected:
	std::string		m_name;
	int	m_hitPoints;
	int	m_eneryPoints;
	int m_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& other);
	~ClapTrap();
	ClapTrap& operator=(ClapTrap& other);
	void	attack(std::string const& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
