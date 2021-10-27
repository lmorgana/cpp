
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
//	FragTrap frag1;
//	FragTrap frag2("John");
//	FragTrap frag3("FragTrap3");
//	frag1 = frag2;
//
//	frag1.attack("MACHINE");
//	frag2.attack("MACHINE");
//	frag3.attack("MACHINE");

	FragTrap frag("Scav1");

	frag.attack("someone");
	frag.takeDamage(2);
	frag.beRepaired(1);
	frag.highFivesGuys();


	return (0);
}

