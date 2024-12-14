#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include <iomanip>
# include <string>

class Abs_Animal
{
	private:
	public:
		Abs_Animal(void);
		Abs_Animal(const std::string type);
		virtual ~Abs_Animal();
		Abs_Animal(Abs_Animal const &src);
		Abs_Animal & operator=(Abs_Animal const &rSym);

		std::string getType() const;
		virtual void makeSound() const = 0;
		virtual void think() const = 0;
		virtual void explainideas() const = 0;
	protected:
		std::string _type;
};

#endif
