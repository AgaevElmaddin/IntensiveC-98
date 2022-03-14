#include "ClassAnimal.hpp"
#include "ClassDog.hpp"
#include "ClassCat.hpp"
// #include "ClassWrongAnimal.hpp"
// #include "ClassWrongCat.hpp"
#include "ClassBrain.hpp"

int		main()
{
	ClassAnimal test;
	// const	ClassAnimal* j = new ClassDog();
	// const	ClassAnimal* i = new ClassCat();

	// delete j; // should not create a leak
	// delete i;

	// ClassAnimal *animals[10];
	// ClassBrain		*brain;

	// for (int i = 0; i < 5; i++)
	// 	animals[i] = new ClassCat();
	// for (int i = 5; i < 10; i++)
	// 	animals[i] = new ClassDog();

	// brain = animals[0]->getBrain();
	// brain->ideas[0] = "What am I supposed to do?";
	// brain->ideas[1] = "Can you help me out with this odd situation?";
	// brain->ideas[2] = "OK! I know that you are so busy! I will wait for a while.";

	// std::cout << animals[0]->getBrain()->ideas[0] << std::endl;

	// *(animals[1]) = *(animals[0]);
	// std::cout << animals[1]->getBrain()->ideas[1] << std::endl;

	// for (int i = 0; i < 10; i++)
	// 	delete animals[i];


	// ClassDog basic;
	// {
	// 	ClassDog tmp = basic;
	// 	std::cout << tmp.getBrain() << std::endl;
	// }
	//  std::cout << basic.getBrain() << std::endl;
	//  std::cout << basic.getType() << std::endl;
	return (0);
}
