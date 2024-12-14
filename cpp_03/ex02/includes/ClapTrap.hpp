#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"
# include <iomanip>
# include <string>

typedef std::string str;

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &copy);
		std::string		getName() const;
		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);
		void	setName(std::string name);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

#endif
