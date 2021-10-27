#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal& other);
	virtual	~Animal();
	Animal&			operator=(const Animal& other);
	std::string	getType(void) const;
	virtual	void	makeSound(void) const;
	virtual void	add_to_my_brain(std::string idea) const;
	virtual void	printf_ideas(void) const;
};

#endif
