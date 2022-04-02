# include "Point.hpp"

Point::Point(void) : _x(0), _y(0) //default constructor
{
	return ;
}

Point::Point(Point const & src) : _x(src.get_x()), _y(src.get_y()) //copy constructor
{
	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y) //constructor that takes initializes _x and _y with the param values.
{
	return ;
}

Point::~Point(void)
{
	return ;
}

const Fixed		Point::get_x(void) const
{
	return this->_x;
}

const Fixed		Point::get_y(void) const
{
	return this->_y;
}

Point Point::operator=(Point const & rhs)
{
	(void)rhs;
	return *this;
}
