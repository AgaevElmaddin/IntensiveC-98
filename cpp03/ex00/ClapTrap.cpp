#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name),
		hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "constructor with parameters called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;

	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target;
	std::cout << " causing " << this->attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->energyPoints -= amount;
	if (this->energyPoints < 0)
	{
		std::cout << "ClapTrap " << this->name << " take " << amount;
		std::cout << " damage and it means the character has " << this->energyPoints;
		std::cout << " energyPoints so the personage is not alive anymore!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " take " << amount;
		std::cout << " damage and it means the character has " << this->energyPoints;
		std::cout << " energyPoints so the personage is still alive!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
	{
		std::cout << "You couldn't rescue the character on time. He has ";
		std::cout << energyPoints << " energy point(s). THE GAME OVER!" <<std::endl;
	}
	else if (this->energyPoints + amount < 10 && energyPoints > 0)
	{
		this->energyPoints += amount;
		std::cout << "ClapTrap " << this->name << " is repaired with " << amount;
		std::cout << " energy point(s) and it means that the character has ";
		std::cout << this->energyPoints << " energy point(s) so far!" << std::endl;
	}
	else
		std::cout << "The character can't have more than 10 energy points!" << std::endl;
}
