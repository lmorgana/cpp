#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &other);
	~Cure();
	Cure	&operator=(const Cure &other);
	Cure	*clone(void) const;
	void	use(ICharacter &target);

};

#endif