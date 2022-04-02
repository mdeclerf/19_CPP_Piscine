#include "Fixed.hpp"

// Usage : ./fixed_point_value
int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

// EXPECTED OUTCOME :
// Default constructor called
// Copy constructor called
// Assignation operator called // <-- Cette ligne est peut-etre absente
// getRawBits member function called
// Default constructor called
// Assignation operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor called
