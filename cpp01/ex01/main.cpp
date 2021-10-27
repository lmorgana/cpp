#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name);

int main(void)
{
	Zombie	*zmbHorde;

	zmbHorde = ZombieHorde(4, "Rick");
	zmbHorde[0].announce();

	delete []zmbHorde;
}

