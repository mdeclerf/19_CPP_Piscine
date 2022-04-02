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

		Fixed & operator=(Fixed const & rhs);	//overload of the assignment operator
	
		~Fixed(void);							//destructor

		int		getRawBits(void) const;			//returns the raw value of the fixed point value.
		void	setRawBits(int const raw);		//sets the raw value of the fixed point value.

		float	toFloat( void ) const;			//converts the fixed point value to a floating point value.
		int		toInt( void ) const;			//converts the fixed point value to an integer value.
	private:
		int					_value;
		static const int	_bits;
};

//overload to the « operator that inserts a floating point representation of the fixed point
//value into the parameter output stream.
std::ostream & operator << (std::ostream & o, Fixed const & i);

#endif

