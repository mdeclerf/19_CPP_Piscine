#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);								//default constructor
		~Fixed(void);								//destructor
		Fixed(Fixed const & src);					//copy constructor
		Fixed & operator=(Fixed const & rhs);		//overload of the assignment operator
		int		getRawBits(void) const;				//returns the raw value of the fixed point value.
		void	setRawBits(int const raw);			//sets the raw value of the fixed point value.

	private:
		int _value;
		static const int _bits;
};

#endif
