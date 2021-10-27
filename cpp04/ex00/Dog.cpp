
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "<Dog> constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
	(void) other;
	std::cout << "<Cat> copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "<Dog> destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	(void) other;
	std::cout << "<Dog> assignation constructor called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Gaav" << std::endl;
}
