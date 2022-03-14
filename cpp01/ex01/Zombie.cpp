#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> ";
	std::cout << "is dying" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << "> ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName()
{
	return (this->name);
}

int		Zombie::setName(std::string name)
{
	if (name == "")
		return (0);
	this->name = name;
	return (1);
}
