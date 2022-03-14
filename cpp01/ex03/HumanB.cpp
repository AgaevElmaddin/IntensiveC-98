#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {}

HumanB::~HumanB() {}

Weapon& HumanB::getWeapon() const
{
	return (*(this->weapon));
}

int		HumanB::setWeapon(Weapon& weaponForB)
{
	if (weaponForB.getType() == "")
		return (0);
	this->weapon = &weaponForB;
	return (1);
}

void	HumanB::attack() const
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << "Since " << this->name << " doesn't have a weapon, he is not able to attack" << std::endl;
}

