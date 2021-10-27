#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	m_materias[4];
	std::string	m_names[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	~MateriaSource();
	MateriaSource&	operator=(const MateriaSource &other);
	void			learnMateria(AMateria *materia);
	AMateria*		createMateria(std::string const &type);
};

#endif
