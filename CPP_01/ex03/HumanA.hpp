#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

// HumanA takes the Weapon in its constructor and is always armed.

class HumanA
{
	public:
		HumanA(std::string name, Weapon& type);
		~HumanA(void);
		void	attack(void) const;
	private:
		std::string _name;
		Weapon& _arme; // Weapon is a reference of type Weapon, in the constructor a variable is affected to it
};

#endif