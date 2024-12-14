#include "FragTrap.hpp"

FragTrap::FragTrap(str name) : ClapTrap() {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << std::setw(15) << "An FragTrap appear, \"" << name << "\" was created with :" << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl;
	std::cout << std::setw(27) << "HP : " << this->_hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->_energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->_attackDamage << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src.getName()) {
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " exploded." << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const &rSym) {
	if (this != &rSym) {
		this->_name = rSym.getName();
		this->_hitPoints = rSym.getHitPoints();
		this->_energyPoints = rSym.getEnergyPoints();
		this->_attackDamage = rSym.getAttackDamage();
	}
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << this->_name << " : Who wants a high-five ?" << std::endl;
}
