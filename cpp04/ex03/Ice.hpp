#ifndef CPP04_ICE_HPP
#define CPP04_ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	~Ice();
	Ice		&operator=(const Ice &other);
	Ice		*clone() const;
	void	use(ICharacter &target);

};

#endif
