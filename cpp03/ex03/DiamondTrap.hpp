#ifndef CPP03_DIAMONDTRAP_HPP
#define CPP03_DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	m_name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap& other);
	~DiamondTrap();
	DiamondTrap& operator=(DiamondTrap& other);
	void	attack(std::string const& target);
	void	whoAmI(void);

};

#endif
