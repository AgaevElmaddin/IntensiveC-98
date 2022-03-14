#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

#include <iostream>
#include <fstream>
#include "ClassBrain.hpp"

class ClassAnimal
{
	protected:
			ClassAnimal();
			ClassAnimal(std::string type);
			ClassAnimal(const ClassAnimal& copy);
	public:
			virtual ~ClassAnimal();

			virtual ClassAnimal& operator=(const ClassAnimal& copy) = 0;

			const std::string	getType() const;

			virtual void	makeSound() const = 0;

			virtual ClassBrain*	getBrain() const = 0;

	protected:
				std::string type;
};

std::ostream& operator<< (std::ostream& out, const ClassAnimal& animal);

#endif
