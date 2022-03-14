#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap defaultCharacter;
	ClapTrap character("Danko");
	ClapTrap copyCharacter(character);

	character.attack("his enemy");
	character.beRepaired(1);
	character.takeDamage(0);
	character.beRepaired(0);
	character.takeDamage(5);
	character.beRepaired(11);
	character.takeDamage(15);
	character.beRepaired(1);

	return (0);
}