#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << std::setw(15) << "ClapTrap \"" << name << "\" was created with :" << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl;
	std::cout << std::setw(27) << "HP : " << this->_hitPoints << std::endl;
	std::cout << std::setw(27) << "Energy Points : " << this->_energyPoints << std::endl;
	std::cout << std::setw(27) << "Attack Damage : " << this->_attackDamage << std::endl;
	std::cout << std::setw(30) << "--------------------" << std::endl << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "Basic ClapTrap was created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " was destroy." << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rSym) {
	if (this != &rSym) {
		this->_name = rSym.getName();
		this->_hitPoints = rSym.getHitPoints();
		this->_energyPoints = rSym.getEnergyPoints();
		this->_attackDamage = rSym.getAttackDamage();
	}
	return *this;
}

int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}

std::string ClapTrap::getName() const
{
		return _name;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::attack(std::string const & target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "Claptrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	} else {
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy points or hit points !" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Ouch ! " << this->_name << " lose " << amount << " hp !" << std::endl;
	this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " repair itself and gain " << amount << " hp !" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	} else {
		std::cout << "ClapTrap " << this->_name << " doesn't have enough energy points or hit points !" << std::endl;
	}
}
