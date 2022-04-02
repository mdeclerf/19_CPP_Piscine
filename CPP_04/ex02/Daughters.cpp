#include "Daughters.hpp"

//---------------------------------Dog canon----------------------------------
Dog::Dog() : AAnimal()
{
	std::cout << "Default constructor of Dog called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src) : AAnimal()
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain(*src.get_brain());
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl;
	delete (this->_brain);
	return ;
}

Dog&	Dog::operator=(Dog & rhs)
{
	std::cout << "Assignation operator of Dog called" << std::endl;
	this->_type = rhs.getType();
	this->_brain = rhs.get_brain();
	return *this;
}

//---------------------------------Dog getter et special ft----------------------------------

Brain* Dog::get_brain(void) const
{
	return(this->_brain);
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
	return ;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Cat canon~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Cat::Cat()
{
	std::cout << "Default constructor of Cat called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor of Cat called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain(*src.get_brain());
	return ;
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat called" << std::endl;
	delete (this->_brain);
	return ;
}

Cat&	Cat::operator=(Cat & rhs)
{
	std::cout << "Assignation operator of Cat called" << std::endl;
	this->_type = rhs.getType();
	this->_brain = rhs.get_brain();
	return *this;
}

//---------------------------------Cat getter et special ft----------------------------------

Brain* Cat::get_brain(void) const
{
	return(this->_brain);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}
