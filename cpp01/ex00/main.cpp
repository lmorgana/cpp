#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie	one("Steve");
	Zombie	*two;


	one.announce();
	two = newZombie("John");
	two->announce();
	randomChump("Oleg");
	delete two;
}

