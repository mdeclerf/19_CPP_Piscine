#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

// HumanB may not always have a Weapon.

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon &type); // since the weapon is not given in the constructor, we need a ft to set the pointer weapon

	private:
		std::string _name;
		Weapon *_weapon; // Weapon is a pointer
};

#endif