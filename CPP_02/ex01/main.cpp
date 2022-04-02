#include "Fixed.hpp"

// Usage : ./fixed_point_value
int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}

// EXPECTED OUTCOME
// Default constructor called
// Int constructor called
// Float constructor called
// Copy constructor called
// Assignation operator called
// Float constructor called
// Assignation operator called
// Destructor called
// a is 1234.43
// b is 10
// c is 42.4219
// d is 10
// a is 1234 as integer
// b is 10 as integer
// c is 42 as integer
// d is 10 as integer
// Destructor called
// Destructor called
// Destructor called
// Destructor called

// BITSHIFTING EXPLICITATION
// float f = 42.42f;
// std::cout << "42.42f			: " << f << std::endl;
// std::string binary = std::bitset<32>(f).to_string();
// std::cout << "42.42f			: " << binary << std::endl;

// int bitshi = 1 << 8;
// std::cout << "1 << 8			: " << bitshi << std::endl;
// binary = std::bitset<32>(bitshi).to_string();
// std::cout << "1 << 8			: " << binary << std::endl;

// int magic = 256.0f;
// std::cout << "256.0f			: " << magic << std::endl;
// binary = std::bitset<32>(magic).to_string();
// std::cout << "256.0f			: " << binary << std::endl;

// float tmp = f * 256.0f;
// std::cout << "42.42f * 256.0f		: " << tmp << std::endl;
// binary = std::bitset<32>(tmp).to_string();
// std::cout << "42.42f * 256.0f		: " << binary << std::endl;

// float round = roundf(tmp);
// std::cout << "roundf(42.42f * 256.0f)	: " << round << std::endl;
// binary = std::bitset<32>(round).to_string();
// std::cout << "roundf(42.42f * 256.0f)	: " << binary << std::endl;

// int value = round;
// std::cout << "cast in int		: " << value << std::endl;
// binary = std::bitset<32>(value).to_string();
// std::cout << "cast in int		: " << binary << std::endl;

// float ret = round / 256.0f;
// std::cout << "prev / 256.0f		: " << ret << std::endl;
// binary = std::bitset<32>(ret).to_string();
// std::cout << "prev / 256.0f		: " << binary << std::endl;