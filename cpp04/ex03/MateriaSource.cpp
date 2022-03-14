#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	this->index = 0;
	for (int i = 0; i < 4; i++)
		this->source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (copy.source[i])
			this->source[i] = copy.source[i]->clone();
		else
			this->source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->source[i] != NULL)
			delete this->source[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (this->source[i] != NULL)
			delete this->source[i];
	for (int i = 0; i < 4; i++)
		if (this->source[i] != NULL)
			this->source[i] = copy.source[i]->clone();
		else
			this->source[i] = NULL;

	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (m == NULL)
		std::cout << "NULL is not a materia. Try ice or cure!" << std::endl;
	if (this->index < 4)
	{
		this->source[this->index] = m;
		this->index++;
		std::cout << "The character has learned with a " << m->getType() << std::endl;
	}
	else
		std::cout << "The character maximum can learn 4 materials" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->source[i] != NULL && this->source[i]->getType() == type)
			return (this->source[i]->clone());
	return (0);
}
