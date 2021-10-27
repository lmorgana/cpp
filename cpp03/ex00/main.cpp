
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap1;
	ClapTrap clap2("ClapTrap1");
	ClapTrap clap3("ClapTrap2");

	clap3.attack("MACHINE");

	clap2.takeDamage(2);
	clap2.takeDamage(2);

	clap2.beRepaired(1);
	clap2.takeDamage(10);

	return (0);
}

