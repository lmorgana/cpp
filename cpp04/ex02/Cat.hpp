#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
private:
	Brain*	brain;

public:
	Cat();
	Cat(Cat& other);
	Cat& operator=(const Cat& other);
	virtual ~Cat();
	virtual void	makeSound(void) const;
	void			add_to_my_brain(std::string idea) const;
	void			printf_ideas(void) const;

};

#endif
