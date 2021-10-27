
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "<Cat> constructor called" << std::endl;
}

Cat::Cat(Cat& other)
{
	(void) other;
	std::cout << "<Cat> copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "<Cat> destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	(void) other;
	std::cout << "<Cat> assignation constructor called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
