#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

#include "ClassAnimal.hpp"

class ClassDog: virtual public ClassAnimal
{
	public:
			ClassDog();
			ClassDog(std::string type);
			ClassDog(const ClassDog& copy);
			virtual ~ClassDog();

			ClassDog& operator=(const ClassDog& copy);

			virtual void	makeSound() const;
};

#endif