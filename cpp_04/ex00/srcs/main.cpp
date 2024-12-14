#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	Animal* a = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	std::cout << a->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	a->makeSound(); // output: "Some sound"
	j->makeSound(); // output: "Wouf Wouf"
	i->makeSound(); // output: "Miaou Miaou"
	delete j;
	delete i;
	delete a;

	std::cout << "WrongParty" << std::endl;
	WrongAnimal* wa = new WrongAnimal();
	WrongAnimal* wj = new WrongCat();

	std::cout << wa->getType() << " " << std::endl;
	std::cout << wj->getType() << " " << std::endl;
	wa->makeSound(); // output: "Some sound"
	wj->makeSound(); // output: "Some sound"
	delete wj;
	delete wa;
	return 0;
}
