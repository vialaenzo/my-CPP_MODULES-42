#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(str name) : ClapTrap()
{
	this->_name = name;
	std::cout << "The diamond goat " << this->_name << " appears in the arena!" << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl;
	std::cout << std::setw(27) << "HP : " << this->_hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->_energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src)
{
	*this = src;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called.";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DESTRUCTOR] The diamond " << this->_name << " say goodbye !" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rSym)
{
	if (this != &rSym)
	{
		this->_name = rSym._name;
		this->_hitPoints = rSym._hitPoints;
		this->_energyPoints = rSym._energyPoints;
		this->_attackDamage = rSym._attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI() const
{
	std::cout << "I'm " << this->_name << ", and my ClapTrap's _name is " << this->_name << "." << std::endl;
}
