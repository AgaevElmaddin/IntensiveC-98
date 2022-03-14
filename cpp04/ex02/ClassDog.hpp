#ifndef CLASSDOG_HPP
# define CLASSDOG_HPP

#include "ClassAnimal.hpp"
#include "ClassBrain.hpp"

class ClassDog: virtual public ClassAnimal
{
	public:
			ClassDog();
			ClassDog(std::string type);
			ClassDog(const ClassDog& copy);
			virtual ~ClassDog();

			ClassDog& operator=(const ClassDog& copy);

			virtual void	makeSound() const;

			virtual ClassBrain*	getBrain() const;

			virtual ClassAnimal& operator=(const ClassAnimal& copy);

	private:
			ClassBrain *brain;
};

#endif