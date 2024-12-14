#ifndef SHUBBERYCREATIONFORM_HPP
#define SHUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
	public:
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

		void execute(Bureaucrat const & executor) const;
};
#endif
