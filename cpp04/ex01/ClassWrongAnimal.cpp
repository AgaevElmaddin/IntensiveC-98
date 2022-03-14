#include "ClassWrongAnimal.hpp"

ClassWrongAnimal::ClassWrongAnimal()
{
	type = "";
	std::cout << "ClassWrongAnimal default constructor called" << std::endl;
}

ClassWrongAnimal::ClassWrongAnimal(std::string type): type(type)
{
	std::cout << "ClassWrongAnimal constructor with parameters called" << std::endl;
}

ClassWrongAnimal::ClassWrongAnimal(const ClassWrongAnimal& copy)
{
	std::cout << "ClassWrongAnimal copy constructor called" << std::endl;
	*this = copy;
}

ClassWrongAnimal::~ClassWrongAnimal()
{
	std::cout << "ClassWrongAnimal destructor called" << std::endl;
}

ClassWrongAnimal& ClassWrongAnimal::operator=(const ClassWrongAnimal& copy)
{
	type = copy.type;

	return (*this);
}

const std::string	ClassWrongAnimal::getType() const
{
	return (this->type);
}

void	ClassWrongAnimal::makeSound() const
{
	std::cout << "ClassWrongAnimal parent class" << std::endl;
}

std::ostream& operator<< (std::ostream& out, const ClassWrongAnimal& WrongAnimal)
{
	out << WrongAnimal.getType();
	return out;
}
