#include "Zombie.hpp"

int		main(void)
{
	std::cout << "Creating a zombie without extra functions: newZombie and randomChump" << std::endl;
	Zombie	disaster("Disaster");
	disaster.announce();

	std::cout << "Creating a zombie using the function newZombie" << std::endl;
	Zombie	*horror = newZombie("Horror");
	horror->announce();
	delete horror;

	std::cout << "Creating a zombie using the function randomChump" << std::endl;
	randomChump("Power");

	return (0);
}