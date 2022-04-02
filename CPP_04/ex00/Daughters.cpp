#include "Daughters.hpp"

//---------------------------------dog----------------------------------
Dog::Dog() : Animal()
{
	std::cout << "Default constructor of Dog called" << std::endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl;
	return ;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	std::cout << "Assignation operator of Dog called" << std::endl;
	this->_type = rhs.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
	return ;
}

//---------------------------------cat---------------------------------

Cat::Cat(void) : Animal()
{
	std::cout << "Default constructor of Cat called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor of Cat called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Destructor of Cat called" << std::endl;
	return ;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	std::cout << "Assignation operator of Cat called" << std::endl;
	this->_type = rhs.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}

//---------------------------------WrongCat---------------------------------
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Default constructor of WrongCat called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat called" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Assignation operator of WrongCat called" << std::endl;
	this->_type = rhs.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}
