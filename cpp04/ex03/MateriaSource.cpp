
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		m_materias[i] = 0;
		m_names[i] = "";
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		m_materias[i] = other.m_materias[i]->clone();
		m_names[i] = other.m_names[i];
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete	m_materias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		m_materias[i] = other.m_materias[i]->clone();
		m_names[i] = other.m_names[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = -1;

	while (++i < 4 && m_materias[i] != 0)
		;
	if (i < 4)
	{
		m_materias[i] = materia->clone();
		m_names[i] = materia->getType();
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = -1;

	while (++i < 4 && m_names[i] != type)
		;
	if (i < 4)
		return (m_materias[i]->clone());
	return (0);
}
