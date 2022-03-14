#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
			HumanB(std::string name);
			~HumanB();

			void	attack() const;
			Weapon& getWeapon() const;
			int		setWeapon(Weapon& weaponForB);

	private:
			std::string name;
			Weapon 		*weapon;
};

# endif
