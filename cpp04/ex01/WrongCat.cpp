
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	brain = new Brain();
	std::cout << "<WrongCat> constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& other)
{
	(void) other;
	brain = new Brain(*other.brain);
	std::cout << "<WrongCat> copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	delete brain;
	std::cout << "<WrongCat> destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat &other)
{
	(void) other;
	brain = other.brain;
	std::cout << "<WrongCat> assignation constructor called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void	WrongCat::add_to_my_brain(std::string idea) const
{
	brain->add_idea(idea);
}

void	WrongCat::printf_ideas(void) const
{
	std::cout << "Cat ideas:" << std::endl;
	brain->print_ideas();
}