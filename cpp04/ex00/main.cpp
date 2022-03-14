#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
#include "ClassWrongAnimal.hpp"
#include "ClassWrongCat.hpp"

int		main()
{
	// const	ClassAnimal* meta = new ClassAnimal();
	// const	ClassAnimal* j = new ClassDog();
	// const	ClassAnimal* i = new ClassCat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete i;
	// delete j;
	// delete meta;

	const	ClassCat cat;
	const	ClassAnimal& animal = cat;
	std::cout << animal.getType() << " " << std::endl;
	animal.makeSound();

	// const	ClassWrongAnimal* WrongMeta = new ClassWrongAnimal();
	// const	ClassWrongCat* WrongCat = new ClassWrongCat();

	// std::cout << WrongCat->getType() << " " << std::endl;
	// WrongCat->makeSound();
	// WrongMeta->makeSound();

	// delete WrongCat;
	// delete WrongMeta;

	const	ClassWrongCat WrongCat1;
	const	ClassWrongAnimal& WrongAnimal = WrongCat1;
	std::cout << WrongAnimal.getType() << " " << std::endl;
	WrongAnimal.makeSound();

}
