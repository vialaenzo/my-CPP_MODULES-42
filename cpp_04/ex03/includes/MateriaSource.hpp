#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "iostream"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class AMateria;
class IMateriaSource;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();
		MateriaSource & operator=(MateriaSource const & src);

		// Methodes IMateriaSource
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
	protected:
	private:
		AMateria* _sources[4];
};

#endif
