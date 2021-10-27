
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
//	ScavTrap scav1;
//	ScavTrap scav2("ScavTrap2");
//	ScavTrap scav3("ScavTrap3");
//	scav1 = scav2;
//
//	scav1.attack("MACHINE");
//	scav2.attack("MACHINE");
//	scav3.attack("MACHINE");


	ScavTrap scav("Scav1");

	scav.attack("someone");
	scav.takeDamage(2);
	scav.beRepaired(1);
	scav.guardGate();


	return (0);
}

