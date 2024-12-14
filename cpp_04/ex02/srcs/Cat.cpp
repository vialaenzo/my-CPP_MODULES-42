#include "Cat.hpp"

Cat::Cat() : Abs_Animal("Cat")
{
	std::cout << "Objet Cat has been created !" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Objet Cat has been deleted !" << std::endl;
}

Cat::Cat(Cat const &src) : Abs_Animal(src)
{
	std::cout << "Objet Cat has been copied !" << std::endl;
	this->_brain = new Brain(*src._brain);
}


Cat &Cat::operator=(Cat const &src)
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

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}

void Cat::think() const
{
	std::cout << "[Cat] : " + this->_brain->getRandomIdea() << std::endl;
}

void Cat::explainideas() const
{
	this->_brain->printIdeas();
}
