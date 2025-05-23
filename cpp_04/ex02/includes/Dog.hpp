#ifndef DOG_HPP
# define DOG_HPP

# include "iostream"
# include <iomanip>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Abs_Animal
{
	private:
		Brain *_brain;
	public:
			Dog(void);
			virtual ~Dog();
			Dog(Dog const &src);
			Dog & operator=(Dog const &rSym);

			void makeSound() const;
			void think() const;
			void explainideas() const;
	protected:
};

#endif
