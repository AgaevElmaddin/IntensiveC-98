#ifndef CLASSWRONGANIMAL_HPP
# define CLASSWRONGANIMAL_HPP

#include <iostream>

class ClassWrongAnimal
{
	public:
			ClassWrongAnimal();
			ClassWrongAnimal(std::string type);
			ClassWrongAnimal(const ClassWrongAnimal& copy);
			~ClassWrongAnimal();

			ClassWrongAnimal& operator=(const ClassWrongAnimal& copy);

			const std::string	getType() const;

			void	makeSound() const;

	protected:
				std::string type;
};

std::ostream& operator<< (std::ostream& out, const ClassWrongAnimal& WrongAnimal);

#endif