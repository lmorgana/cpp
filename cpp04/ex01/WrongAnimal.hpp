#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal& other);
	~WrongAnimal();
	WrongAnimal&	operator=(WrongAnimal& other);
	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif
