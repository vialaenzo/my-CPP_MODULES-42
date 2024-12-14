#ifndef WRONGWrongANIMAL_HPP
# define WRONGWrongANIMAL_HPP

# include "iostream"
# include <iomanip>
# include <string>

class WrongAnimal
{
	private:
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal & operator=(WrongAnimal const &rSym);

		std::string getType() const;
		void makeSound() const;
	protected:
		std::string _type;
};

#endif
