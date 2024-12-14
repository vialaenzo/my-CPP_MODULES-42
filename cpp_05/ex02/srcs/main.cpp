#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>


int main()
{
	srand(static_cast<unsigned>(time(0)));
	try {

		Bureaucrat b1("Bureaucrat1", 150);
		Bureaucrat b2("Bureaucrat2", 1);
		Bureaucrat b3("Bureaucrat3", 5);
		ShrubberyCreationForm s1("ShrubberyCreationForm1");

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << s1 << std::endl;

		b1.signAForm(s1);
		b1.executeAForm(s1);

		RobotomyRequestForm r1("RobotomyRequestForm1");
		std::cout << r1 << std::endl;

		b2.signAForm(r1);
		b2.executeAForm(r1);

		PresidentialPardonForm p1("PresidentialPardonForm1");
		std::cout << p1 << std::endl;

		b3.signAForm(p1);
		b3.executeAForm(p1);

	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
