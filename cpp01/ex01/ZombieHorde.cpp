#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
	Zombie	*zmbHorde;
	int		i;

	(void) name;
	zmbHorde = new Zombie[N];
	i = -1;
	while (++i < N)
		zmbHorde[i].setName(name);
	return (zmbHorde);
}
