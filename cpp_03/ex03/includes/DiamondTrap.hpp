#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		DiamondTrap(str name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap();
		~DiamondTrap();

		DiamondTrap &	operator=(DiamondTrap const &rSym);

		void	whoAmI() const;
	private:
		str	_name;
};

#endif
