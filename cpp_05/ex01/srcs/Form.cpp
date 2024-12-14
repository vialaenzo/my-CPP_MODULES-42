#include "Form.hpp"

Form::Form(const std::string &name, int grade, int exec) : _name(name), _grade(grade), _exec(exec) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_signedForm = false;
}

Form::~Form() {}

const std::string &Form::getName() const {
	return _name;
}

int Form::getGrade() const {
	return _grade;
}

bool Form::getSignedForm() const {
	return _signedForm;
}

int Form::getExec() const {
	return _exec;
}

void Form::incrementGrade() {
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void Form::decrementGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream &operator<<(std::ostream &os, const Form &b) {
	os << b.getName() << ", grade " << b.getGrade() << ", signed: " << b.getSignedForm() << ", exec grade: " << b.getExec();
	return os;
}

void Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= _grade)
		_signedForm = true;
	else
		throw GradeTooLowException();
}


