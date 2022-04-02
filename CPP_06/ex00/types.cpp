#include "types.hpp"

//--------------------------------Constructors/destructors---------------------------------

Conversion::Conversion(void)
{
	return ;
}

Conversion::Conversion(std::string str) : _value(str)
{
	return ;
}

Conversion::Conversion(Conversion const & src)
{
	*this = src;
	return ;
}

Conversion::~Conversion(void)
{
	return ;
}

Conversion*	Conversion::operator=(Conversion const & rhs)
{
	this->_value = rhs.get_value();
	return this;
}

//--------------------------------Getters and conversion from std::string to double---------------------------------
std::string	Conversion::get_value(void) const
{
	return (this->_value);
}

int check_input(std::string input)
{
	if (!input.compare("-inff") || !input.compare("+inff") || !input.compare("nanf") || !input.compare("-inf") || !input.compare("+inf") || !input.compare("nan"))
		return (0);
	
	int len = input.length();
	int j = 0; // checking how many . there are 
	for (int i = 0; i < len; i++)
	{
		if (input[i] == '.')
			j++;
	}
	if (j > 1 || (input[0] == '.' || input[len - 1] == '.')) // if there is more than one '.' or it's in the last or first position, exit
		return (1);

	for (int i = 0; i < len; i++) // check if it's only digits or . (not including the first and last char (can be a f))
	{
		if (input[i] == '.' || (i == 0 && (input[i] == '-' || input[i] == '+')))
				continue;
		if ((i != 0 || i != len -1) && (input[i] < 48 || input[i] > 57))
		{
			if (j == 1 && i == len - 1 && input[i] == 'f')
				return (0);
			else
				return (1);
		}
	}
	return (0);
}

// double stod (const string&  str, size_t* idx = 0);
// Parses str interpreting its content as a floating-point number, which is returned as a value of type double.
//
void Conversion::convert(void)
{
	if (check_input(this->_value))
		throw Conversion::WrongInput();
	else if (this->_value.length() == 1 ) // if the input is of type char, stod will throw an exception (stod: no conversion)
	{
		if (isdigit(this->_value[0]))
			this->_converted_value = std::stod(this->_value, NULL);
		else
			this->_converted_value = static_cast<double>(this->_value[0]);

	}
	else
		this->_converted_value = std::stod(this->_value, NULL);
}

//--------------------------------Conversion for each variable types---------------------------------

//bool isnan( double arg );
//Determines if the given floating point number arg is a not-a-number (NaN) value.
//Return value : true if arg is a NaN, false otherwise
// https://en.wikipedia.org/wiki/NaN
// https://en.cppreference.com/w/cpp/numeric/math/isnan
void	Conversion::int_display(void)
{
	std::cout << "int: ";
	if (std::isnan(this->_converted_value) || this->_converted_value > INT_MAX || this->_converted_value < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(this->_converted_value) << std::endl;
	return ;
}

void	Conversion::char_display(void)
{
	std::cout << "char: ";
	if (std::isnan(this->_converted_value) || this->_converted_value < 0 || this->_converted_value > 127 )
		std::cout << "impossible" << std::endl;
	else if ((this->_converted_value >= 0 && this->_converted_value < 33) || this->_converted_value == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(this->_converted_value) << "'" << std::endl;
	return ;
}

//bool isinf( float arg );
//Determines if the given floating-point number arg is a positive or negative infinity.
//Return value : true if arg is infinite, false otherwise
// https://en.cppreference.com/w/cpp/numeric/math/isinf
void	Conversion::float_display(void)
{
	// To check if there is a fractional part to a float/double : cast the float to an int 
	//and then compare it to your original variable. If they are the same there was no fractional part.
	int check = static_cast<int>(this->_converted_value);
	std::cout << "float: ";
	if (check == this->_converted_value && !std::isinf(this->_converted_value))
		std::cout << static_cast<float>(this->_converted_value) << ".0f" << std::endl;
	else
		std::cout << static_cast<float>(this->_converted_value) << "f" << std::endl;
	return ;
}

void	Conversion::double_display(void)
{
	int check = static_cast<int>(this->_converted_value); // same as the float_display ft, we need to check if there is a fractional part to determine if a .0 is needed or not
	std::cout << "double: ";
	if (check == this->_converted_value && !std::isinf(this->_converted_value))
		std::cout << this->_converted_value << ".0" << std::endl;
	else
		std::cout << this->_converted_value << std::endl;
	return ;
}
