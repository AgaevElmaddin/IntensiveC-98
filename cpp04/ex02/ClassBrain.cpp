#include "ClassBrain.hpp"

ClassBrain::ClassBrain()
{
	std::cout << "ClassBrain default constructor called" << std::endl;
}

ClassBrain::ClassBrain(const ClassBrain& copy)
{
	std::cout << "ClassBrain copy constructor called" << std::endl;
	*this = copy;
}

ClassBrain::~ClassBrain()
{
	std::cout << "ClassBrain destructor called" << std::endl;
}

ClassBrain&	ClassBrain::operator=(const ClassBrain& copy)
{
	std::cout << "ClassBrain assignment operator called" << std::endl;
	(void)copy;
	if (this == &copy)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}
