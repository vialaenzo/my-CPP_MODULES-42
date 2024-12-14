#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	ClapTrap claptrap("Claptrap");
	ScavTrap scavtrap("Scavtrap");
	FragTrap fragtrap("Fragtrap");

	DiamondTrap diamondtrap("Diamondtrap");
	for (int i = 0; i < 10; i++) {
		claptrap.attack("target");
	}

	for (int i = 0; i < 10; i++) {
		scavtrap.attack("target");
	}

	for (int i = 0; i < 10; i++) {
		fragtrap.attack("target");
	}

	for (int i = 0; i < 10; i++) {
		diamondtrap.attack("target");
	}

	for (int i = 0; i < 10; i++) {
		diamondtrap.whoAmI();
	}

	for (int i = 0; i < 10; i++) {
		diamondtrap.highFivesGuys();
	}

	for (int i = 0; i < 10; i++) {
		diamondtrap.guardGate();
	}

	for (int i = 0; i < 10; i++) {
		diamondtrap.takeDamage(10);
	}

	for (int i = 0; i < 10; i++) {
		diamondtrap.beRepaired(10);
	}


	return 0;
}


