#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Objet Dog has been created !" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Objet Dog has been deleted !" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Objet Dog has been copied !" << std::endl;
}

Dog& Dog::operator=(Dog const &src)
{
	if (this == &src)
		return (*this);
	*this = Dog(src);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}

