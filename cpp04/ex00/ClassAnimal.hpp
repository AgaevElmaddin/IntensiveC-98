#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

#include <iostream>
#include <fstream>

class ClassAnimal
{
	public:
			ClassAnimal();
			ClassAnimal(std::string type);
			ClassAnimal(const ClassAnimal& copy);
			virtual ~ClassAnimal();

			ClassAnimal& operator=(const ClassAnimal& copy);

			const std::string	getType() const;

			virtual void	makeSound() const;

	protected:
				std::string type;
};

std::ostream& operator<< (std::ostream& out, const ClassAnimal& animal);

#endif
