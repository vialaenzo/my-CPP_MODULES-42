#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b("Bureaucrat", 1);
		Bureaucrat b2("Bureaucrat2", 150);

		std::cout << b << std::endl;
		std::cout << b2 << std::endl;

		b2.decrementGrade();
		std::cout << b2 << std::endl;

		b.incrementGrade();
		std::cout << b << std::endl;

	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
