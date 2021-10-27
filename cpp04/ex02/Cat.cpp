
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "<Cat> constructor called" << std::endl;
}

Cat::Cat(Cat& other)
{
	brain = new Brain(*other.brain);
	std::cout << "<Cat> copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "<Cat> destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	*brain = *other.brain;
	std::cout << "<Cat> assignation operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::add_to_my_brain(std::string idea) const
{
	brain->add_idea(idea);
}

void	Cat::printf_ideas(void) const
{
	std::cout << "Cat ideas:" << std::endl;
	brain->print_ideas();
}
