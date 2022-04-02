
#include "ClapTrap.hpp"

//------------------Constructors and destructors------------------

ClapTrap::ClapTrap() 
{
	std::cout << "Default constructor of ClapTrap called" << std::endl;
	this->_name = "Default_clap_name";
	this->_Hitpoints = 10;
	this->_Energypoints = 10;
	this->_Attackdamage = 0;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name.append("_clap_name"))
{
	std::cout << "Constructor of ClapTrap " << this->_name << " called" << std::endl;
	this->_Hitpoints = 10;
	this->_Energypoints = 10;
	this->_Attackdamage = 0;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor of ClapTrap called" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor of ClapTrap " << this->_name << " called" << std::endl;
	return ;
}

//------------------Getters functions-----------------------

std::string		ClapTrap::get_name(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::get_Hitpoints(void) const
{
	return (this->_Hitpoints);
}

unsigned int	ClapTrap::get_Energypoints(void) const
{
	return (this->_Energypoints);
}

unsigned int	ClapTrap::get_Attackdamage(void) const
{
	return (this->_Attackdamage);
}

//------------------Action functions-----------------------
void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_Attackdamage << " points of damage!" << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_Energypoints -= amount;
	std::cout << "ClapTrap " << this->_name << " take damage. The Energypoint gauge is now :  " << this->_Energypoints << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_Energypoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired. The Energypoint gauge is now :  " << this->_Energypoints << std::endl;
	return;
}

//------------------Overload operator-----------------------

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Assignation operator of ClapTrap called" << std::endl;
	this->_name = rhs.get_name();
	this->_Hitpoints = rhs.get_Hitpoints();
	this->_Energypoints = rhs.get_Energypoints();
	this->_Attackdamage = rhs.get_Attackdamage();
	return *this;
}


