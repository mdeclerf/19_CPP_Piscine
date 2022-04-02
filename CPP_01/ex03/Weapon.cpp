#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string Weapon::getType(void) const
{
	return this->_type;
}
