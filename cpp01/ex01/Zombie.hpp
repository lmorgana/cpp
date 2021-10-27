#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include "iostream"

class Zombie
{
	private:
		std::string	m_name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	setName(std::string name);
		void	announce(void);
};

#endif
