#include "ClassAnimal.hpp"

ClassAnimal::ClassAnimal()
{
	type = "";
	std::cout << "ClassAnimal default constructor called" << std::endl;
}

ClassAnimal::ClassAnimal(std::string type): type(type)
{
	std::cout << "ClassAnimal constructor with parameters called" << std::endl;
}

ClassAnimal::ClassAnimal(const ClassAnimal& copy)
{
	std::cout << "ClassAnimal copy constructor called" << std::endl;
	*this = copy;
}

ClassAnimal::~ClassAnimal()
{
	std::cout << "ClassAnimal destructor called" << std::endl;
}

ClassAnimal& ClassAnimal::operator=(const ClassAnimal& copy)
{
	type = copy.type;

	return (*this);
}

const std::string	ClassAnimal::getType() const
{
	return (this->type);
}

void	ClassAnimal::makeSound() const
{
	std::cout << "Parent class" << std::endl;
}

std::ostream& operator<< (std::ostream& out, const ClassAnimal& animal)
{
	out << animal.getType();
	return out;
}
