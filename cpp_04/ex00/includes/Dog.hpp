#ifndef DOG_HPP
# define DOG_HPP

# include "iostream"
# include <iomanip>
# include <string>
# include "Animal.hpp"

class Dog : virtual public Animal
{
	private:
	public:
	Dog(void);
	~Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &rSym);

	void makeSound() const;
	protected:
};

#endif
