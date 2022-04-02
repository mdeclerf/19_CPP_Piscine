#include "Animal.hpp"

//--------------------------------Animal----------------------------
Animal::Animal()
{
	std::cout << "Default constructor of Animal called" << std::endl;
	return ;
}

Animal::Animal(std::string str) : _type(str)
{
	std::cout << "Constructor of Animal called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal()
{
	std::cout << "Destructor of Animal called" << std::endl;
	return ;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << "The Animal makes a sound " << std::endl;
	return ;
}

Animal&	Animal::operator=(Animal const & rhs)
{
	std::cout << "Assignation operator of Animal called" << std::endl;
	this->_type = rhs.getType();
	return *this;
}

//--------------------------------WrongAnimal----------------------------
WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string str) : _type(str)
{
	std::cout << "Constructor of WrongAnimal called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "Copy constructor of WrongAnimal called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called" << std::endl;
	return ;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "The WrongAnimal makes a sound " << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Assignation operator of WrongAnimal called" << std::endl;
	this->_type = rhs.getType();
	return *this;
}
