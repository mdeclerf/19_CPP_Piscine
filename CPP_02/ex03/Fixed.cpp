#include "Fixed.hpp"

int const	Fixed::_bits = 8;

//---------------Constructors---------------
Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = n << 8;
	return ;
}

Fixed::Fixed(const float f)
{
	//std::cout << "Float constructor called" << std::endl;
	float tmp = f * (1 << 8);
	tmp = roundf(tmp);
	this->_value = tmp;
	return ;
}

//---------------Destructor---------------
Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

//---------------Overload of arithmetic operators---------------
Fixed&	Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed tmp(toFloat() + rhs.toFloat());
	return tmp;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed tmp(toFloat() - rhs.toFloat());
	return tmp;
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	Fixed tmp(toFloat() * rhs.toFloat());
	return tmp;
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	Fixed tmp(toFloat() / rhs.toFloat());
	return tmp;
}

//---------------Overload of comparison operators---------------

bool Fixed::operator>(Fixed const & rhs)
{
	if (this->_value > rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator<(Fixed const & rhs)
{
	if (this->_value < rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(Fixed const & rhs)
{
	if (this->_value <= rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(Fixed const & rhs)
{
	if (this->_value >= rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator==(Fixed const & rhs)
{
	if (this->_value == rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(Fixed const & rhs)
{
	if (this->_value != rhs.getRawBits())
		return (1);
	else
		return (0);
}

//---------------Overload of comparison operators---------------
//The C++ language specification has a special case that provides the answer: the compiler looks to 
//see if the overloaded operator has an int parameter. If the overloaded operator has an int parameter, 
//the operator is a postfix overload. If the overloaded operator has no parameter, the operator is a prefix overload.

Fixed Fixed::operator++(int dummy) // i++
{
	Fixed tmp(*this);
	if (this->_value >= 0)
		++(*this);
	return (tmp);
}

Fixed& Fixed::operator++() // ++i
{
	if (this->_value >= 0)
		++this->_value;
	return (*this);
}

Fixed Fixed::operator--(int dummy) // i--
{
	Fixed tmp(*this);
	if (this->_value >= 1)
		--(*this);
	return (tmp);
}

Fixed& Fixed::operator--() // --i
{
	if (this->_value >= 1)
		--this->_value;
	return (*this);
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
	//std::cout << "in fixed.tofloat : " << (float)this->_value / (1 << 8) << std::endl;
	return ((float)this->_value / (1 << 8));
}

int		Fixed::toInt( void ) const
{
	return (roundf(this->_value >> 8));
}

//---------------Min et max ft--------------
Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (a);
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b)
{
	
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b)
{
	
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (a);
}

//---------------Convert ft---------------
std::ostream & operator << (std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return(o);
}
