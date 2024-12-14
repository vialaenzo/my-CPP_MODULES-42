#include "AMateria.hpp"

AMateria::AMateria(void) {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy) {
	std::cout << "AMateria copy constructor called" << std::endl;
	this->_type = cpy._type;
}

AMateria &AMateria::operator=(const AMateria &rSym) {
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
