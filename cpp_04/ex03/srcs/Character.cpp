#include "Character.hpp"



Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) _inventory[i] = NULL;
	_name = "nameless hero";
}

Character::Character(std::string const &name) {
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++) _inventory[i] = NULL;
	_name = name;
}

Character::Character(const Character &copy) {
	std::cout << "Character copy construtor called" << std :: endl;
	this->_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i]) {
			this->_inventory[i] = copy._inventory[i]->clone();
		} else {
			this->_inventory[i] = NULL;
		}
	}
}

Character &Character::operator=(const Character &src) {
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &src) {
		this->_name = src._name;
		for (int i = 0; i < 4; i++) {
			if (src._inventory[i]) {
				this->_inventory[i] = src._inventory[i]->clone();
			} else {
				this->_inventory[i] = NULL;
			}
		}
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_inventory[i]) {
			delete _inventory[i];
		}
	}
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (!m) return;
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			break;
		}
		if (i == 3) {
			std::cout << "Inventory is full, it fall on the ground !!" << std::endl;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		_inventory[idx] = NULL;
	}
	std::cout << "Item unequiped, it fall on the ground !!" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4) {
		if (_inventory[idx]) {
			_inventory[idx]->use(target);
		}
	}
}
