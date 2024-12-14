#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat b("Bureaucrat", 1);
		Bureaucrat b2("Bureaucrat2", 150);

		std::cout << b << std::endl;
		std::cout << b2 << std::endl;

		Form f("Formulaire", 1, 2);
		std::cout << f << std::endl;

		b.signForm(f);
		std::cout << f << std::endl;


	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

}
