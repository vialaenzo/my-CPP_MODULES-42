#include "ScavTrap.hpp"

//ScavTrap::ScavTrap(str name) : ClapTrap() {
//	this->setName(name);
//	this->setHitPoints(100);
//	this->setEnergyPoints(50);
//	this->setAttackDamage(20);
//	std::cout << "An evil ScavTrap appear, be careful with " << this->_name << " and his " << this->_attackDamage << " attack damage !" << std::endl;
//}

ScavTrap::ScavTrap(str name) : ClapTrap() {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << std::setw(15) << "An evil ScavTrap appear, be careful \"" << name << "\" was created with :" << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl;
	std::cout << std::setw(27) << "HP : " << this->_hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->_energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->_attackDamage << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src.getName()) {
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "Evil ScavTrap " << this->_name << " exploded." << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &rSym) {
	if (this != &rSym) {
		this->_name = rSym.getName();
		this->_hitPoints = rSym.getHitPoints();
		this->_energyPoints = rSym.getEnergyPoints();
		this->_attackDamage = rSym.getAttackDamage();
	}
	return *this;
}

void ScavTrap::attack(std::string const & target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "Evil ScavTrap " << this->_name << " go for broke " << target << " causing him " << this->_attackDamage << " attack damage" << std::endl;
		this->_energyPoints -= 1;
	} else {
		std::cout << "Evil ScavTrap " << this->_name << " doesn't have enough energy points or hit points !" << std::endl;
	}
}

void	ScavTrap::guardGate() const {
	std::cout << "Evil ScavTrap " << this->_name << " enter in protected mode !" << std::endl;
}
