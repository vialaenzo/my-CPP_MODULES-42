#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "iostream"
# include <iomanip>
# include <string>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(Brain const &src);
		Brain & operator=(Brain const &rSym);
		~Brain();

		void setIdea(std::string idea, int index);
		std::string getIdea(int index) const;
		void printIdeas() const;
		void printIdea(int index) const;
		std::string getRandomIdea() const;
	protected:
};

#endif
