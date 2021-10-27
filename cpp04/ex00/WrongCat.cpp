
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "<WrongCat> constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& other)
{
	type = other.type;
	std::cout << "<WrongCat> copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "<WrongCat> destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat &other)
{
	type = other.type;
	std::cout << "<WrongCat> assignation constructor called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
