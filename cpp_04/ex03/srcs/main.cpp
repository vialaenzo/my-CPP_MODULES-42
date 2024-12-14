#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

AMateria* on_the_floor[50];
void freeOnTheFloor() {
	for (int i = 0; i < 50; i++) {
		if (on_the_floor[i] != NULL) {
			delete on_the_floor[i];
			on_the_floor[i] = NULL;
		}
	}
	std::cout << "All AMateria on the floor have been freed." << std::endl;
}

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}

/*int main(void)
{
	for (int i = 0; i < 50; i++) {
		on_the_floor[i] = NULL;
	}
	IMateriaSource* src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());
	ICharacter* moi = new Character("MOI");
	AMateria* tmp1;
	AMateria* tmp2;
	tmp1 = src2->createMateria("ice");
	moi->equip(tmp1);
	tmp2 = src2->createMateria("cure");
	moi->equip(tmp2);

	ICharacter* toi = new Character("TOI");

	moi->use(0, *toi);
	moi->use(1, *toi);

	moi->unequip(0);
	on_the_floor[0] = tmp1;
	moi->unequip(1);
	on_the_floor[1] = tmp2;
	freeOnTheFloor();
	delete toi;
	delete moi;
	delete src2;
	return 0;
}*/


