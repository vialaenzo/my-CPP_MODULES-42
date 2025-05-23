#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src) {
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src) {
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
