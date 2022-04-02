#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);							//default constructor
		Fixed(Fixed const & src);				//copy constructor
		Fixed(const int n);						//constructor that converts n to the correspondant fixed(8) point value
		Fixed(const float f);					//constructor that converts f to the correspondant fixed(8) point value

		Fixed & operator=(Fixed const & rhs);	//overload of arithmetic operators
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		bool operator>(Fixed const & rhs);	//overload of comparison operators
		bool operator<(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

		Fixed operator++(int dummy);	//pre-increment, post-increment, pre-decrement and post-decrement operators
		Fixed & operator++();
		Fixed operator--(int dummy);
		Fixed & operator--();

		~Fixed(void);							//destructor

		int		getRawBits(void) const;			//returns the raw value of the fixed point value.
		void	setRawBits(int const raw);		//sets the raw value of the fixed point value.

		float	toFloat( void ) const;			//converts the fixed point value to a floating point value.
		int		toInt( void ) const;			//converts the fixed point value to an integer value.

		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);

		static const Fixed & min(Fixed const & a, Fixed const & b);
		static const Fixed & max(Fixed const & a, Fixed const & b);

	private:
		int					_value;
		static const int	_bits;
};

std::ostream & operator << (std::ostream & o, Fixed const & i);

#endif

