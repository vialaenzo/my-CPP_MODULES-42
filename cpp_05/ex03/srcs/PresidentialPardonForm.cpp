#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5) {
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy) {
	this->setTarget(copy.getTarget());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	if (this != &copy)
	{
		this->setTarget(copy.getTarget());
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

