#include "Base.hpp"

Base *generate()
{
	int random = std::rand() % 3; // Renvoie 0, 1 ou 2
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (...) {}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (...) {}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (...) {}

	std::cout << "Unknown type" << std::endl;
}

int main()
{
	std::srand(std::time(NULL));

	for (int i = 0; i < 5; ++i)
	{
		Base *obj = generate();
		std::cout << "Identification via pointeur : ";
		identify(obj);
		std::cout << "Identification via référence : ";
		identify(*obj);
		delete obj;
		std::cout << std::endl;
	}

	return 0;
}
