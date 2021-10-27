#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
private:
	Brain*	brain;

public:
	Dog();
	Dog(Dog& other);
	Dog& operator=(const Dog& other);
	virtual ~Dog();
	virtual void	makeSound(void) const;
	void			add_to_my_brain(std::string idea) const;
	void			printf_ideas(void) const;

};

#endif
