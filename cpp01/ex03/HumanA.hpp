#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string m_name;
	Weapon&		m_weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);
	void	attack(void);
	void	printUpper(std::string str1);
};

#endif
