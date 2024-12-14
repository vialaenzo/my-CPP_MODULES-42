#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "iostream"
# include <iomanip>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	private:
	public:
	WrongCat(void);
	~WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat & operator=(WrongCat const &rSym);

	protected:
};

#endif
