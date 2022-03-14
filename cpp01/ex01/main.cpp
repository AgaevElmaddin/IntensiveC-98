#include "Zombie.hpp"

int		main(void)
{
	std::cout << "Horde of zombies" << std::endl;
	Zombie *HordeOfZombies = zombieHorde(5, "disaster");
	for (int i = 0; i < 5; i++)
		HordeOfZombies[i].announce();
	delete [] HordeOfZombies;
	return (0);
}