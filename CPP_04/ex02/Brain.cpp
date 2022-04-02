#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain called" << std::endl;
	ideas = new (std::string[100]);
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Copy constructor of Brain called" << std::endl;
	ideas = new std::string[100];
	for (int i=0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return ;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl;
	delete [] ideas;
	return ;
}

Brain&	Brain::operator=(Brain const & rhs)
{
	std::cout << "Assignation operator of Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = rhs.ideas[i];
	return *this;
}
