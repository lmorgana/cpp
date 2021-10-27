#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
	std::string	m_name;
	AMateria*	m_materias[4];

public:
	Character(std::string name);
	Character(const Character& other);
	~Character();
	Character& operator=(const Character& other);
	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

};

#endif
