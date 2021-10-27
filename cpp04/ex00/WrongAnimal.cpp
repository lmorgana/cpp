
#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "<WrongAnimal> constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& other)
{
	type = other.type;
	std::cout << "<WrongAnimal> copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "<WrongAnimal> destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal &other)
{
	type = other.type;
	std::cout << "<WrongAnimal> assignation constructor called" << std::endl;
	return (*this);
}

std::string		WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "AAAAAAUUUUFFFFF" << std::endl;
}
