#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("(null)")
{
	std::cout << "Objet WrongAnimal has been created !" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "Objet WrongAnimal (" << this->_type << ") has been created !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Objet WrongAnimal has been deleted !" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) :  _type(src._type)
{
	std::cout << "Objet WrongAnimal has been copied !" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this == &src)
		return (*this);
	*this = WrongAnimal(src);
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "l'Wronganimal fait le son" << std::endl;
}
