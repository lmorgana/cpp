
#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "<Animal> constructor called" << std::endl;
}

Animal::Animal(Animal& other)
{
	type = other.type;
	std::cout << "<Animal> copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "<Animal> destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal &other)
{
	type = other.type;
	std::cout << "<Animal> assignation constructor called" << std::endl;
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (type);
}
