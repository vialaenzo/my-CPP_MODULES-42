#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) _sources[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (src._sources[i]) {
			this->_sources[i] = src._sources[i]->clone();
		} else {
			this->_sources[i] = NULL;
		}
	}
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (_sources[i]) {
			delete _sources[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &src) {
		for (int i = 0; i < 4; i++) {
			if (src._sources[i]) {
				this->_sources[i] = src._sources[i]->clone();
			} else {
				this->_sources[i] = NULL;
			}
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!_sources[i]) {
			_sources[i] = m;
			return ;
		}
	}
	std::cout << "Source is full,  the item fall on the ground" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (_sources[i] && _sources[i]->getType() == type) {
			return _sources[i]->clone();
		}
	}
	return NULL;
}
