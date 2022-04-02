#include "Fixed.hpp"

// Usage : ./fixed_point_value

int main()
{
	Fixed a(5);
	Fixed b(4);
	Fixed c(0);
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	c = a + b;
	std::cout << "c = a + b : " << c << std::endl;

	c = a - b;
	std::cout << "c = a - b : " << c << std::endl;

	c = a * b;
	std::cout << "c = a * b : " << c << std::endl;

	c = a / b;
	std::cout << "c = a / b : " << c << std::endl;

	std::cout << "++a : " << ++a << std::endl;
	std::cout << "b++ : " << b++ << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "b-- : " << b-- << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "max : " << Fixed::max( a, b ) << std::endl;
	std::cout << "min : " << Fixed::min( a, b ) << std::endl;

	std::cout << std::endl;
	a = 5.5f;
	b = 2.2f;
	c = 0.0f;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	c = a + b;
	std::cout << "c = a + b : " << c << std::endl;

	c = a - b;
	std::cout << "c = a - b : " << c << std::endl;

	c = a * b;
	std::cout << "c = a * b : " << c << std::endl;

	c = a / b;
	std::cout << "c = a / b : " << c << std::endl;

	std::cout << "++a : " << ++a << std::endl;
	std::cout << "b++ : " << b++ << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "--a : " << --a << std::endl;
	std::cout << "b-- : " << b-- << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "max : " << Fixed::max( a, b ) << std::endl;
	std::cout << "min : " << Fixed::min( a, b ) << std::endl;
}

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

// EXPECTED OUTCOME (with ctors/dtor logs deleted)
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016