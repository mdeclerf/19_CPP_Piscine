#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default constructor of Animal called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor of Animal called" << std::endl;
	return ;
}

AAnimal*	AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "Assignation operator of Animal called" << std::endl;
	this->_type = rhs.getType();
	return this;
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}