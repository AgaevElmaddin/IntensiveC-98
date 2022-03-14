#ifndef CLASSWRONGCAT_HPP
# define CLASSWRONGCAT_HPP

#include "ClassWrongAnimal.hpp"

class ClassWrongCat: public ClassWrongAnimal
{
	public:
			ClassWrongCat();
			ClassWrongCat(std::string type);
			ClassWrongCat(const ClassWrongCat& copy);
			~ClassWrongCat();

			ClassWrongCat& operator=(const ClassWrongCat& copy);

			void	makeSound() const;
};

#endif