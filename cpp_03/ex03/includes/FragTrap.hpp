#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(str name);
		FragTrap(FragTrap const &src);
		FragTrap();
		~FragTrap();
		FragTrap & operator=(FragTrap const &rSym);

		virtual void	highFivesGuys(void);
	private:
};

#endif
