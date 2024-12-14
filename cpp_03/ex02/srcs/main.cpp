#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap claptrap("Claptrap");
	ScavTrap scavtrap("Scavtrap");
	FragTrap fragtrap("Fragtrap");

	claptrap.attack("target");
	scavtrap.attack("target");
	fragtrap.attack("target");
	scavtrap.guardGate();
	fragtrap.highFivesGuys();
	scavtrap.takeDamage(10);
	scavtrap.beRepaired(10);
	claptrap.takeDamage(10);
	claptrap.beRepaired(10);
	fragtrap.takeDamage(10);
	fragtrap.beRepaired(10);
	//for (int i = 0; i < 10; i++) {
	//	claptrap.attack("target");
	//}

	return 0;
}


