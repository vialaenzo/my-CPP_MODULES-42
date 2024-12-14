#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "iostream"
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter {
	public:
		// Attributs
		Character();
		Character(std::string const & name);
		Character(Character const & cpy);
		Character & operator=(Character const & src);

		// Destructors
		~Character();

		// Getters
		std::string const & getName() const;

		// Methodes ICharacter
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string _name;
		AMateria *_inventory[4];
	protected:
};
#endif
