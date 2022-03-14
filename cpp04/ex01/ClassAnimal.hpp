#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

#include <iostream>
#include <fstream>
#include "ClassBrain.hpp"

class ClassAnimal
{
	public:
			ClassAnimal();
			ClassAnimal(std::string type);
			ClassAnimal(const ClassAnimal& copy);
			virtual ~ClassAnimal();

			virtual ClassAnimal& operator=(const ClassAnimal& copy);

			const std::string	getType() const;

			virtual void	makeSound() const;

			virtual ClassBrain*	getBrain() const = 0;

	protected:
				std::string type;
};

std::ostream& operator<< (std::ostream& out, const ClassAnimal& animal);

#endif
