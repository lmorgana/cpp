#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"


class	WrongCat : public WrongAnimal
{
private:
	Brain* brain;

public:
	WrongCat();
	WrongCat(WrongCat& other);
	WrongCat& operator=(WrongCat& other);
	~WrongCat();
	void	makeSound(void) const;
	void			add_to_my_brain(std::string idea) const;
	void			printf_ideas(void) const;

};


#endif
