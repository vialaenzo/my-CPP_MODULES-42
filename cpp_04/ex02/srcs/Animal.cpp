#include "Animal.hpp"

Abs_Animal::Abs_Animal() : _type("(null)")
{
	std::cout << "Objet Abs_Animal has been created !" << std::endl;
}

Abs_Animal::Abs_Animal(const std::string type) : _type(type)
{
	std::cout << "Objet Abs_Animal (" << this->_type << ") has been created !" << std::endl;
}

Abs_Animal::~Abs_Animal()
{
	std::cout << "Objet Abs_Animal has been deleted !" << std::endl;
}

Abs_Animal::Abs_Animal(Abs_Animal const &src) : _type(src._type)
{
	std::cout << "Objet Abs_Animal has been copied !" << std::endl;
}

Abs_Animal &Abs_Animal::operator=(Abs_Animal const &src)
{
	if (this != &src)
	{
		_type = src._type;
	}
	return (*this);
}
std::string Abs_Animal::getType() const
{
	return (this->_type);
}

void Abs_Animal::makeSound() const
{
	std::cout << "l'Abs_Animal fait le son" << std::endl;
}

void Abs_Animal::think() const
{
	std::cout << "l'Abs_Animal pense" << std::endl;
}

void Abs_Animal::explainideas() const
{
	std::cout << "l'Abs_Animal explique ses idées" << std::endl;
}
