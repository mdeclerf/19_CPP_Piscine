#include "ScavTrap.hpp"

//------------------Constructors and destructors------------------

ScavTrap::ScavTrap() : ClapTrap("Default_clap_name")
{
	std::cout << "Default constructor of ScavTrap called" << std::endl;
	this->_Hitpoints = 100;
	this->_Energypoints = 50;
	//std::cout << "in scav " << this->_Energypoints << std::endl;
	this->_Attackdamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor of ScavTrap " << this->_name << " called" << std::endl;
	this->_Hitpoints = 100;
	this->_Energypoints = 50;
	std::cout << "in scav " << this->_Energypoints << std::endl;
	this->_Attackdamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor of ScavTrap " << this->_name << " called" << std::endl;
	return ;
}


//--------------------------Guard gate----------------------------
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_Attackdamage << " points of damage!" << std::endl;
	return;
}

//------------------Overload operator-----------------------
ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_Hitpoints = rhs.get_Hitpoints();
	this->_Energypoints = rhs.get_Energypoints();
	this->_Attackdamage = rhs.get_Attackdamage();
	return *this;
}