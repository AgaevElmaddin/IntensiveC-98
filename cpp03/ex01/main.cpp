#include "ScavTrap.hpp"

int		main(void)
{
	{

		//ScavTrap defaultCharacter1;
		ScavTrap character1("Pushkin");
		//ScavTrap copyCharacter1(character1);

		character1.attack("Dantes");
		character1.beRepaired(1);
		character1.takeDamage(0);
		character1.beRepaired(0);
		character1.takeDamage(5);
		character1.beRepaired(11);
		character1.takeDamage(15);
		character1.beRepaired(1);
		character1.guardGate();
	}

	{
		//ClapTrap defaultCharacter;
		ClapTrap character("Danko");
		//ClapTrap copyCharacter(character);

		character.attack("his enemy");
		character.beRepaired(1);
		character.takeDamage(0);
		character.beRepaired(0);
		character.takeDamage(5);
		character.beRepaired(11);
		character.takeDamage(15);
		character.beRepaired(1);
	}
	return (0);
}