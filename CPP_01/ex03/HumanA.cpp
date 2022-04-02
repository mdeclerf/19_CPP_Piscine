#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _arme(type), _name(name) // initialization of the attributes _name and _weapon
{
	return ;
}

HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_arme.getType() << std::endl;
	return ;
}
