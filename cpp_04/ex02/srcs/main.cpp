#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Tester la création d'objets dérivés
    Abs_Animal* cat = new Cat();
    Abs_Animal* dog = new Dog();

    // Tester les méthodes virtuelles
    std::cout << "Cat makes sound: ";
    cat->makeSound();
    std::cout << "Cat thinks: ";
    cat->think();
    std::cout << "Cat explains ideas: ";
    cat->explainideas();

    std::cout << "\nDog makes sound: ";
    dog->makeSound();
    std::cout << "Dog thinks: ";
    dog->think();
    std::cout << "Dog explains ideas: ";
    dog->explainideas();

    // Libérer la mémoire
    delete cat;
    delete dog;

    return 0;
}

