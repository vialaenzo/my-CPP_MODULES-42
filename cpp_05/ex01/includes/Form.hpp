#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string _name; // Nom constant
	int _grade;				// Grade (1 à 150)
	bool _signedForm;		// Formulaire signé
	int _exec;			// Grade minimum pour signer le formulaire

public:
	// Exceptions spécifiques
	class GradeTooHighException : public std::exception {
		const char *what() const throw() {
			return "Grade too high!";
		}
	};

	class GradeTooLowException : public std::exception {
		const char *what() const throw() {
			return "Grade too low!";
		}
	};

	// Constructeur et destructeur
	Form(const std::string &name, int grade, int exec);
	~Form();

	// Getters
	const std::string &getName() const;
	int getGrade() const;
	bool getSignedForm() const;
	int getExec() const;

	// Méthodes pour modifier le grade
	void incrementGrade();
	void decrementGrade();

	// Surcharge de l'opérateur <<
	friend std::ostream &operator<<(std::ostream &os, const Form &b);

	// Méthode pour signer le formulaire
	void beSigned(Bureaucrat &b);

};

#endif
