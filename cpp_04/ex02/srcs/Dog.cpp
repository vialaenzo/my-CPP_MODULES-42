#include "Dog.hpp"

Dog::Dog() : Abs_Animal("Dog")
{
	std::cout << "Objet Dog has been created !" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Objet Dog has been deleted !" << std::endl;
}

Dog::Dog(Dog const &src) : Abs_Animal(src)
{
	std::cout << "Objet Dog has been copied !" << std::endl;
	this->_brain = new Brain(*src._brain);
}

Dog &Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		Abs_Animal::operator=(src);
			// Copie des membres de la classe de base
		delete _brain;                   // Supprime l'ancien cerveau
		_brain = new Brain(*src._brain); // Copie profonde du cerveau
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}

void Dog::think() const
{
	std::cout << "[Dog] : " + this->_brain->getRandomIdea() << std::endl;
}

void Dog::explainideas() const
{
	this->_brain->printIdeas();
}
