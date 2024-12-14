#ifndef CAT_HPP
# define CAT_HPP

# include "iostream"
# include <iomanip>
# include <string>
# include "Animal.hpp"

class Cat : virtual public Animal
{
	private:
	public:
	Cat(void);
	~Cat();
	Cat(Cat const &src);
	Cat & operator=(Cat const &rSym);

	void makeSound() const;
	protected:
};

#endif
