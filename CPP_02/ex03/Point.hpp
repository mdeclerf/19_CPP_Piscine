#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
	public:
		Point(void);							//default constructor
		Point(Point const & src);				//copy constructor
		Point(const float x, const float y);	//constructor that takes initializes _x and _y with the param values.
		~Point(void);

		const Fixed	get_x(void) const;
		const Fixed	get_y(void) const;

		Point operator=(Point const & rhs);	//overload of assignation operator

	private:
		Fixed const _x;
		Fixed const _y;
};

#endif