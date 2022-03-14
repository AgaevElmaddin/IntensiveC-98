#include "ClassDog.hpp"

ClassDog::ClassDog()
{
	type = "Dog";
	this->brain = new ClassBrain();
	std::cout << "ClassDog default constructor called" << std::endl;
}

ClassDog::ClassDog(std::string type)
{
	type = "Dog";
	std::cout << "ClassDog constructor with parameters called" << std::endl;
}

ClassDog::ClassDog(const ClassDog& copy)
{
	std::cout << "ClassDog copy constructor called" << std::endl;
	if (copy.brain)
	{
		this->brain = new ClassBrain();
		*(this->brain) = *(copy.brain);
	}
	else
		this->brain = 0;
	this->type = copy.type;
}

ClassDog::~ClassDog()
{
	delete this->brain;
	std::cout << "ClassDog destructor called" << std::endl;
}

ClassDog& ClassDog::operator=(const ClassDog& copy)
{
	std::cout << "ClassDog assignment operator called" << std::endl;
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

void	ClassDog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

ClassBrain*	ClassDog::getBrain() const
{
	return (this->brain);
}

ClassAnimal& ClassDog::operator=(const ClassAnimal& copy)
{
	std::cout << "ClassAnimal assignment operator for the ClassDog called" << std::endl;
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

