
#include "Brain.hpp"

Brain::Brain()
{
	len_ideas = 0;
}

Brain::Brain(Brain& other)
{
	len_ideas = other.len_ideas;
	for (int i = 0; i < max_ideas; i++)
		m_ideas[i] = other.m_ideas[i];
}

Brain::~Brain()
{

}

Brain& Brain::operator=(Brain& other)
{
	len_ideas = other.len_ideas;
	for (int i = 0; i < max_ideas; i++)
		m_ideas[i] = other.m_ideas[i];
	std::cout << "Assignation operator" << std::endl;
	return (*this);
}

void Brain::add_idea(std::string idea)
{
	m_ideas[len_ideas] = idea;
	len_ideas++;
}

void	Brain::print_ideas(void)
{
	for (int i = 0; i < len_ideas; i++)
		std::cout << "ideas[" << i << "]='" << m_ideas[i] << "'" << std::endl;
}
