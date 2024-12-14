#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* animal = new Animal();
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    dog->think();
    cat->think();

    delete cat;
    delete dog;
    delete animal;

    Dog* originalDog = new Dog();
    Dog* copiedDog = new Dog(*originalDog);  // Utilise le constructeur de copie

    delete originalDog;
    delete copiedDog;

	WrongAnimal* wrongAnimal = new WrongAnimal();
	WrongAnimal* wrongCat = new WrongCat();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	delete wrongCat;
	delete wrongAnimal;

    return 0;
}
