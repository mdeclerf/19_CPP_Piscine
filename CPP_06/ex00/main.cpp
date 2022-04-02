#include "types.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 )
	{
		std::cout << "Wrong input, ./convert takes one argument" << std::endl;
		return (0);
	}

	Conversion conv(argv[1]); // instance of the class Conversion taking the input as param
	try // try catch for wrong input (thrown in the Conversion::convert(void) ft)
	{
		conv.convert(); // this ft converts argv[1] to a double
		conv.char_display(); // the double is then converted to a char, int, float, double
		conv.int_display();
		conv.float_display();
		conv.double_display();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
