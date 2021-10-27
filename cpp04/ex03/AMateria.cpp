
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	m_type = type;
}

AMateria::AMateria(const AMateria &other)
{
	m_type = other.m_type;
}

AMateria::~AMateria()
{

}

AMateria& AMateria::operator=(const AMateria &other)
{
	m_type = other.m_type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (m_type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}
