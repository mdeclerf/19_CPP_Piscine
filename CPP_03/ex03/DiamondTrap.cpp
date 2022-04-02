#include "DiamondTrap.hpp"

//------------------Constructors and destructors------------------

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
	this->_name = "Default";
	this->_Energypoints = 50;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = name;
	std::cout << "Constructor of DiamondTrap " << this->_name << " called" << std::endl;
	this->_Energypoints = 50;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor of DiamondTrap " << this->_name << " called" << std::endl;
	return ;
}

//------------------Overload operator-----------------------
DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Assignation operator of DiamondTrap called" << std::endl;
	this->_name = rhs.get_name();
	return *this;
}

//--------------------Getter---------------------
std::string		DiamondTrap::get_name(void) const
{
	return (this->_name);
}

//-------------------Extra function----------------------
void		DiamondTrap::print_points(void) const
{
	
	std::cout << "~~~~~~ Hitpoints :    " << this->_Hitpoints << " ~~~~~~" << std::endl;
	std::cout << "~~~~~~ Energypoints : " << this->_Energypoints << " ~~~~~~" << std::endl;
	std::cout << "~~~~~~ Attackdamage : " << this->_Attackdamage << " ~~~~~~" << std::endl;
}

void		DiamondTrap::whoAmI() const
{
	std::cout << "My Diamond name is " << this->_name << " and my Clap name is " << ClapTrap::_name << std::endl;
	return ;
}
