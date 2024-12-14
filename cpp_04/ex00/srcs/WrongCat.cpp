#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Objet WrongCat has been created !" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Objet WrongCat has been deleted !" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << "Objet WrongCat has been copied !" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &src)
{
	if (this == &src)
		return (*this);
	*this = WrongCat(src);
	return (*this);
}

