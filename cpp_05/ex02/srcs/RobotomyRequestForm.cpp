#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45) {
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {
	this->setTarget(copy.getTarget());
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	if (this != &copy) {
		this->setTarget(copy.getTarget());
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::cout << "*drilling noises*" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->getTarget() << " has not been robotomized successfully" << std::endl;
}
