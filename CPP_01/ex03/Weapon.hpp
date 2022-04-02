#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		void		setType(std::string type); // to be able to set _type outside of the class scope
		std::string getType(void) const; // // to be able to get _type outside of the class scope (const because never modifies _type)
	private:
		std::string _type;
};

#endif