#include "fonc.hpp"

int main(void)
{
	int a = 21;
	int b = 32;

	char c = 'c';
	char d = 'd';

	std::cout << "a = " << a << " et b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " et b = " << b << std::endl;

	std::cout << "c = " << c << " et d = " << d << std::endl;
	swap(c, d);
	std::cout << "c = " << c << " et d = " << d << std::endl;

	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
}
