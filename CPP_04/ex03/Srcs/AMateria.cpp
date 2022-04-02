#include "../Includes/AMateria.hpp"

//----------------Constructors-------------------------------------------
AMateria::AMateria(std::string const & type) : _type(type)
{
	//std::cout << "Default constructor of Materia called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	//std::cout << "Copy constructor of Materia called" << std::endl;
	*this = src;
	return ;
}

AMateria::~AMateria()
{
	//std::cout << "Destructor of Materia called" << std::endl;
	return ;
}

AMateria*	AMateria::operator=(AMateria const & rhs)
{
	(void)rhs;
	return this;
}

//----------------Getter-------------------------------------------
std::string	const &	AMateria::getType(void) const
{
	return (this->_type);
}

//----------------Ft-------------------------------------------
void AMateria::use(ICharacter& target)
{
	(void)target;
	return;
}
