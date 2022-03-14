#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = "";
	this->slot = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string const &name)
{
	std::cout << "Character constructor with parameters called" << std::endl;
	*this = Character();
	this->name = name;
}

Character::Character(const Character& copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
}

Character& Character::operator=(const Character& copy)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	this->name = copy.getName();

	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
		std::cout << "NULL is not a materia. Try ice or cure!" << std::endl;
	if (this->slot < 4)
	{
		this->inventory[this->slot] = m;
		this->slot++;
		std::cout << "The character has equipped with a " << m->getType() << std::endl;
	}
	else
		std::cout << "The character maximum can has 4 materials" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 4)
		std::cout << "idx can't be more than 3 because we have slots for material between 0 to 3" << std::endl;
	else if (idx < 0)
		std::cout << "idx can't be a negative number because it's an index of massive" << std::endl;
	else if (idx < 4 && this->inventory[idx] != NULL)
		this->inventory[idx] = NULL;
	else
		std::cout << "This slot has already been empty" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || this->inventory[idx] == NULL)
		std::cout << "idx is out of range[0, 3] or inventory[idx] == NULL" << std::endl;
	this->inventory[idx]->use(target);
}
