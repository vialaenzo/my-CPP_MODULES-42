#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &copy) {
	(void)copy;
	return *this;
}

AForm *createRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

AForm *createPresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

AForm *createShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	struct FormPair
	{
		std::string name;
		FormCreator creator;
	};

	FormPair forms[] = {
		{"robotomy request", createRobotomyRequestForm},
		{"presidential pardon", createPresidentialPardonForm},
		{"shrubbery creation", createShrubberyCreationForm}};

	for (size_t i = 0; i < sizeof(forms) / sizeof(forms[0]); ++i)
	{
		if (forms[i].name == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[i].creator(target);
		}
	}

	throw FormNotFoundException();
}


