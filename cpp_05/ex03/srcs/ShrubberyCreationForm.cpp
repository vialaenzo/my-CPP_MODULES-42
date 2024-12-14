#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137) {
	this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {
	this->setTarget(copy.getTarget());
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
	if (this != &copy)
	{
		this->setTarget(copy.getTarget());
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		AForm::execute(executor);

		std::ofstream file((this->getTarget() + "_shrubbery").c_str());
		if (!file.is_open())
		{
			throw std::runtime_error("Failed to open file for writing.");
		}

		file << "       _-_\n";
		file << "    /~~   ~~\\\n";
		file << " /~~         ~~\\\n";
		file << "{               }\n";
		file << " \\  _-     -_  /\n";
		file << "   ~  \\\\ //  ~\n";
		file << "_- -   | | _- _\n";
		file << "  _ -  | |   -_\n";
		file << "      // \\\\\n";

		file.close();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
