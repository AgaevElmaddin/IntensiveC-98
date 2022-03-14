#include "ClassDog.hpp"

ClassDog::ClassDog()
{
	type = "Dog";
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
	*this = copy;
}

ClassDog::~ClassDog()
{
	std::cout << "ClassDog destructor called" << std::endl;
}

ClassDog& ClassDog::operator=(const ClassDog& copy)
{
	type = copy.type;

	return (*this);
}

void	ClassDog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
