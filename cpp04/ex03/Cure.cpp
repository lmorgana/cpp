
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &other) : AMateria(other.m_type)
{

}

Cure::~Cure()
{

}

Cure &Cure::operator=(const Cure &other)
{
	m_type = other.m_type;
	return (*this);
}

Cure	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *"
	<< std::endl;
}


