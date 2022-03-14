#include "ClassWrongCat.hpp"

ClassWrongCat::ClassWrongCat()
{
	type = "WrongCat";
	std::cout << "ClassWrongCat default constructor called" << std::endl;
}

ClassWrongCat::ClassWrongCat(std::string type)
{
	type = "WrongCat";
	std::cout << "ClassWrongCat constructor with parameters called" << std::endl;
}

ClassWrongCat::ClassWrongCat(const ClassWrongCat& copy)
{
	std::cout << "ClassWrongCat copy constructor called" << std::endl;
	*this = copy;
}

ClassWrongCat::~ClassWrongCat()
{
	std::cout << "ClassWrongCat destructor called" << std::endl;
}

ClassWrongCat& ClassWrongCat::operator=(const ClassWrongCat& copy)
{
	type = copy.type;

	return (*this);
}

void	ClassWrongCat::makeSound() const
{
	std::cout << "WrongMeow" << std::endl;
}
