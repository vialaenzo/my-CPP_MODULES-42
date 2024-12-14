#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(str name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap & operator=(ScavTrap const &rSym);

		void	attack(const str &target);
		void	guardGate() const;
	private:
};

#endif
