#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	return (this->type);
}

int		Weapon::setType(const std::string& type)
{
	if (type == "")
		return (0);
	this->type = type;
	return (1);
}
