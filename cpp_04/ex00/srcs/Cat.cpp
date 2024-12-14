#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Objet Cat has been created !" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Objet Cat has been deleted !" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Objet Cat has been copied !" << std::endl;
}

Cat& Cat::operator=(Cat const &src)
{
	if (this == &src)
		return (*this);
	*this = Cat(src);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}
