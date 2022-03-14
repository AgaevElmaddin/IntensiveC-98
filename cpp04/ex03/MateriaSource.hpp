#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	public:
			MateriaSource();
			MateriaSource(const MateriaSource& copy);
			virtual ~MateriaSource();

			MateriaSource& operator=(const MateriaSource& copy);

			virtual void learnMateria(AMateria*);
			virtual AMateria* createMateria(std::string const &type);

	private:
			AMateria* source[4];
			int		index;
};

#endif
