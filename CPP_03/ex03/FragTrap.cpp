#include "FragTrap.hpp"

//------------------Constructors and destructors------------------

FragTrap::FragTrap() : ClapTrap("Default_clap_name")
{
	std::cout << "Default constructor of FragTrap called" << std::endl;
	this->_Hitpoints = 100;
	this->_Energypoints = 100;
	this->_Attackdamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor of FragTrap " << this->_name << " called" << std::endl;
	this->_Hitpoints = 100;
	this->_Energypoints = 100;
	this->_Attackdamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy constructor of FragTrap called" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor of FragTrap " << this->_name << " called" << std::endl;
	return ;
}


//--------------------------Guard gate----------------------------
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " displays a positive high fives request on the standard output." << std::endl;
	return ;
}

//------------------Overload operator-----------------------
FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_Hitpoints = rhs.get_Hitpoints();
	this->_Energypoints = rhs.get_Energypoints();
	this->_Attackdamage = rhs.get_Attackdamage();
	return *this;
}