#include "../Includes/Ice.hpp"

//------------------------------canon---------------------------
Ice::Ice() : AMateria("ice")
{
	return ;
};

Ice::Ice(Ice const & src) : AMateria("ice")
{
	(void) src;
	return ;
};

Ice::~Ice()
{
	return ;
};

Ice& Ice::operator=(Ice const & rhs)
{
	this->AMateria::operator=(rhs);
	return *this;
}

AMateria* Ice::clone() const
{
	Ice *tmp;
	tmp = new Ice(*this);
	return tmp;
}

//------------------------------ft---------------------------
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}
