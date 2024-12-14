#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class RobotomyRequestForm;
class PresidentialPardonForm;
class ShrubberyCreationForm;

class Intern
{
public:

	Intern();
	Intern(const Intern &copy);
	~Intern();
	Intern &operator=(const Intern &copy);

	typedef AForm *(*FormCreator)(std::string const &);
	AForm *makeForm(std::string formName, std::string target);


	class FormNotFoundException : public std::exception
	{
		const char *what() const throw()
		{
			return "Form not found!";
		}
	};
};



#endif
