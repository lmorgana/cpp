
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "<Dog> constructor called" << std::endl;
}

Dog::Dog(Dog& other)
{
	type = other.type;
	brain = new Brain(*(other.brain));
	std::cout << "<Cat> copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "<Dog> destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	*brain = *other.brain;
	std::cout << "<Dog> assignation operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Gaav" << std::endl;
}

void	Dog::add_to_my_brain(std::string idea) const
{
	brain->add_idea(idea);
}

void	Dog::printf_ideas(void) const
{
	std::cout << "Dog ideas:" << std::endl;
	brain->print_ideas();
}
