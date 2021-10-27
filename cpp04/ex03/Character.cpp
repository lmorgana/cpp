
#include "Character.hpp"

Character::Character(std::string name)
{
	m_name = name;
	for (int i = 0; i < 4; i++)
		m_materias[i] = 0;
}

Character::Character(const Character& other)
{
	m_name = other.m_name;
	for (int i = 0; i < 4; i++)
		m_materias[i] = other.m_materias[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete	m_materias[i];
}

Character& Character::operator=(const Character &other)
{
	m_name = other.m_name;
	for (int i = 0; i < 4; i++)
	{
		if (other.m_materias[i] != 0)
		{
			delete m_materias[i];
	 		m_materias[i] = (other.m_materias[i])->clone();
		}
		else
			m_materias[i] = 0;
	}
	return (*this);
}

std::string	const &Character::getName(void) const
{
	return (m_name);
}

void Character::equip(AMateria *m)
{
	int i = -1;

	while (++i < 4 && m_materias[i] != 0)
		;
	if (i < 4)
		m_materias[i] = m;
}

void Character::unequip(int idx)
{
	delete m_materias[idx];
	m_materias[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
	if (m_materias[idx])
		m_materias[idx]->use(target);
	else
		std::cout << "nothing" << std::endl;
}
