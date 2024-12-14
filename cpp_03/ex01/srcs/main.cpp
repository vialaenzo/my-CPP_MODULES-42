#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap claptrap("Claptrap");
	ScavTrap scavtrap("Scavtrap");

	claptrap.attack("target");
	scavtrap.attack("target");
	scavtrap.guardGate();
	scavtrap.takeDamage(10);
	scavtrap.beRepaired(10);
	claptrap.takeDamage(10);
	claptrap.beRepaired(10);
	//for (int i = 0; i < 10; i++) {
	//	claptrap.attack("target");
	//}

	return 0;
}
