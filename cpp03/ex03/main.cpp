
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
//	DiamondTrap diam1;
//	DiamondTrap diam2("DiamondTrap2");
//	DiamondTrap diam3("DiamondTrap3");
//	diam1 = diam2;
//
//	diam1.attack("MACHINE");
//	diam2.attack("MACHINE");
//	diam3.attack("MACHINE");


	DiamondTrap diam("diam1");

	diam.attack("someone");
	diam.attack("someone");
	diam.takeDamage(2);
	diam.beRepaired(1);
	diam.highFivesGuys();
	diam.guardGate();
	diam.whoAmI();


	return (0);
}

