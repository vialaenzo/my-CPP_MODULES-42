#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include <iomanip>
# include <string>

class Animal
{
	private:
	public:
		Animal(void);
		Animal(const std::string type);
		virtual ~Animal();
		Animal(Animal const &src);
		Animal & operator=(Animal const &rSym);

		std::string getType() const;
		virtual void makeSound() const;
		virtual void think() const;
		virtual void explainideas() const;
	protected:
		std::string _type;
};

#endif
