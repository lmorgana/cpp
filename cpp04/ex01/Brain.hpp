#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
	static const int	max_ideas = 100;

private:
	std::string	m_ideas[max_ideas];
	int			len_ideas;

public:
	Brain();
	Brain(Brain& other);
	~Brain();
	Brain& operator=(Brain& other);
	void	add_idea(std::string idea);
	void	print_ideas(void);

};

#endif
