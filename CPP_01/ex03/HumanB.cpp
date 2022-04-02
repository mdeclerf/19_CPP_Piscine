#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB(void)
{
	return;
}

void HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
	return ;
}

void HumanB::attack(void) const
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with his bravery, no weapons, determination is what matters" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return ;
}
