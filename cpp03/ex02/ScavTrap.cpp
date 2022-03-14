#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap constructor with parameters called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackDamage = copy.attackDamage;

	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "\nScavTrap " << this->name << " attack " << target;
	std::cout << " causing " << this->attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "\nScavTrap have entered in Gate keeper mode\n" << std::endl;
}
