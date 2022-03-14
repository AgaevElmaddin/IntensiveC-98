#include "ClassCat.hpp"

ClassCat::ClassCat()
{
	type = "Cat";
	this->brain = new ClassBrain();
	std::cout << "ClassCat default constructor called" << std::endl;
}

ClassCat::ClassCat(std::string type)
{
	type = "Cat";
	std::cout << "ClassCat constructor with parameters called" << std::endl;
}

ClassCat::ClassCat(const ClassCat& copy)
{
	std::cout << "ClassCat copy constructor called" << std::endl;
	if (copy.brain)
	{
		this->brain = new ClassBrain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = 0;
	this->type = copy.type;
}

ClassCat::~ClassCat()
{
	delete this->brain;
	std::cout << "ClassCat destructor called" << std::endl;
}

ClassCat& ClassCat::operator=(const ClassCat& copy)
{
	std::cout << "ClassCat assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	delete[] brain;
	if (copy.brain)
	{
		this->brain = new ClassBrain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = 0;
	this->type = copy.type;

	return (*this);
}

void	ClassCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

ClassBrain*	ClassCat::getBrain() const
{
	return (this->brain);
}

ClassAnimal& ClassCat::operator=(const ClassAnimal& copy)
{
	std::cout << "ClassAnimal assignment operator for the ClassCat called" << std::endl;
	if (this == &copy)
		return *this;
	if (copy.getBrain())
	{
		this->brain = new ClassBrain();
		*(this->brain) = *(copy.getBrain());
	}
	else
		this->brain = 0;
	this->type = copy.getType();

	return (*this);
}
