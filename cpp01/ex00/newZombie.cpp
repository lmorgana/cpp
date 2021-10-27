#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*zmb;

	zmb = new Zombie(name);
	return (zmb);
}

