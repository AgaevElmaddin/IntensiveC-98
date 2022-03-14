#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
			Character();
			Character(std::string const &name);
			Character(const Character& copy);
			virtual ~Character();

			Character& operator=(const Character& copy);

			virtual std::string const &getName() const;
			virtual void equip(AMateria* m);
			virtual void unequip(int idx);
			virtual void use(int idx, ICharacter& target);

	private:
			std::string name;
			AMateria* 	inventory[4];
			unsigned int	slot;
};

#endif
