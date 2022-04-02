#include "Fixed.hpp"

int const	Fixed::_bits = 8;

//---------------Constructors---------------
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = n << 8;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	float tmp = f * (1 << 8);
	tmp = roundf(tmp);
	this->_value = tmp;
	return ;
}

//---------------Destructor---------------
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//---------------Overload operator---------------
Fixed&	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

//---------------Setter and getter---------------
int		Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

//---------------Convert ft---------------
float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << 8));
}

int		Fixed::toInt( void ) const
{
	return (roundf(this->_value >> 8));
}

//---------------Convert ft---------------
std::ostream & operator << (std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return(o);
}
