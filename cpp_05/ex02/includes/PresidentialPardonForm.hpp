#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class AFormn;

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
};
#endif
