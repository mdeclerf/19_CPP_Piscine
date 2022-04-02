#include "../Includes/Cure.hpp"

//------------------------------canon---------------------------
Cure::Cure() : AMateria("cure")
{
	return ;
};

Cure::Cure(Cure const & src) : AMateria("cure")
{
	(void)src;
	return ;
};

Cure::~Cure()
{
	return ;
};

Cure& Cure::operator=(Cure const & rhs)
{
	this->AMateria::operator=(rhs);
	return *this;
}

//------------------------------ft---------------------------
AMateria* Cure::clone() const
{
	Cure *tmp;
	tmp = new Cure(*this);
	return tmp;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}
