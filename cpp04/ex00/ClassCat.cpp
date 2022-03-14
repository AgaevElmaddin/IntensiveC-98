#include "ClassCat.hpp"

ClassCat::ClassCat()
{
	type = "Cat";
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
	*this = copy;
}

ClassCat::~ClassCat()
{
	std::cout << "ClassCat destructor called" << std::endl;
}

ClassCat& ClassCat::operator=(const ClassCat& copy)
{
	type = copy.type;

	return (*this);
}

void	ClassCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
