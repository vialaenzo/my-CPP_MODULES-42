#include "Brain.hpp"
#include <cstdlib>

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "empty";
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const &rSym)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rSym._ideas[i];
	return *this;
}

void Brain::setIdea(std::string idea, int index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->_ideas[index];
	return "empty";
}

void Brain::printIdeas() const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
}

void Brain::printIdea(int index) const
{
	if (index >= 0 && index < 100)
		std::cout << this->_ideas[index] << std::endl;
}

std::string	Brain::getRandomIdea() const {
	int	min = 0;
	int	max = 99;
	int random = min + rand() % (max - min + 1);

	return this->_ideas[random];
}
