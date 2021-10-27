#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string m_type;

public:
	Weapon(void);
	Weapon(std::string newType);
	~Weapon(void);
	void	setType(std::string newType);
	const	std::string&	getType(void);
};

#endif
