#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _name; // Nom constant
	int _grade;				 // Grade (1 à 150)
	bool _signedAForm;		 // AFormulaire signé
	int _exec;
	std::string _target;

public:
	// Exceptions spécifiques
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade too high !";
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade too low!";
		}
	};

	class FormNotSignedException : public std::exception
	{
		const char *what() const throw()
		{
			return "Form not signed !";
		}
	};

	class GradeTooLowExecException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade too low to execute !";
		}
	};

	// Constructeur et destructeur
	AForm(const std::string &name, int grade, int exec);
	virtual ~AForm();

	// Getters
	const std::string &getName() const;
	int getGrade() const;
	bool getSignedAForm() const;
	int getExec() const;
	std::string getTarget() const;

	// Méthode pour modifier la cible
	void setTarget(const std::string &target);

	// Méthodes pour modifier le grade
	void incrementGrade();
	void decrementGrade();

	// Surcharge de l'opérateur <<
	friend std::ostream &operator<<(std::ostream &os, const AForm &b);

	// Méthode pour signer le Aformulaire
	void beSigned(Bureaucrat &b);
	void execute(Bureaucrat const &executor) const;
};

#endif
