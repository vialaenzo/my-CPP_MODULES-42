#include "AForm.hpp"

AForm::AForm(const std::string &name, int grade, int exec) : _name(name), _grade(grade), _exec(exec) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_signedAForm = false;
	_target = "(null)";
}

AForm::~AForm() {}

const std::string &AForm::getName() const {
	return _name;
}

int AForm::getGrade() const {
	return _grade;
}

bool AForm::getSignedAForm() const {
	return _signedAForm;
}

int AForm::getExec() const {
	return _exec;
}

std::string AForm::getTarget() const {
	return _target;
}

void AForm::setTarget(const std::string &newtarget)
{
	_target = newtarget;
}

void AForm::incrementGrade() {
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void AForm::decrementGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream &operator<<(std::ostream &os, const AForm &b) {
	os << "\n" << b.getName() << ", grade " << b.getGrade() << ", signed: " << b.getSignedAForm() << ", exec grade: " << b.getExec() << "." << std::endl;
	return os;
}

void AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= _grade)
		_signedAForm = true;
	else
		throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const {
	if (!_signedAForm)
		throw FormNotSignedException();
	if (executor.getGrade() > _exec)
		throw GradeTooLowExecException();
}


