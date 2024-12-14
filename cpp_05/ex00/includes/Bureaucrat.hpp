#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
private:
	const std::string _name; // Nom constant
	int _grade;				// Grade (1 à 150)

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
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();

	// Getters
	const std::string &getName() const;
	int getGrade() const;

	// Méthodes pour modifier le grade
	void incrementGrade();
	void decrementGrade();

	// Surcharge de l'opérateur <<
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);
};

#endif
