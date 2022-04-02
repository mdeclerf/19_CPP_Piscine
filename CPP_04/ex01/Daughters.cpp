#include "Daughters.hpp"

//---------------------------------dog----------------------------------
//Upon construction Dog and Cat will initialize their Brain* with a new Brain();

Dog::Dog() : Animal()
{
	std::cout << "Default constructor of Dog called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain(); // we need a dynamic allociation of Brain. When assigning to 
	//_brain an instance of Brain, the default constructor of Brain is called and a malloc of ideas is made
	return ;
}

Brain* Dog::get_brain(void) const
{
	return(this->_brain);
}

Dog::Dog(Dog const & src) : Animal()
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain(*src.get_brain()); // we need a dynamic allociation of Brain
	// and at the same time get the content of the Brain within source. By calling the constructor 
	// by copy of Brain with a dereferenced _brain, we copy all the ideas of the Brain in src to the new Brain
	return ;
}

//Upon destruction Dog and Cat will delete their Brain.
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

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
	return ;
}

//---------------------------------cat---------------------------------

Cat::Cat() : Animal()
{
	std::cout << "Default constructor of Cat called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Brain* Cat::get_brain(void) const
{
	return(this->_brain);
}

Cat::Cat(Cat const & src) : Animal()
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

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}