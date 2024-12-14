#include "ClapTrap.hpp"

int main() {
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2(claptrap);

	claptrap.attack("target");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap2.attack("target");
	claptrap2.takeDamage(5);
	claptrap2.beRepaired(5);
	return 0;
}
