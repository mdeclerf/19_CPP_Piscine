#ifndef TYPES_HPP
#define TYPES_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <stdexcept>

class Conversion
{
	public:
		Conversion(void);
		Conversion(std::string str);
		Conversion(Conversion const & src);
		~Conversion(void);
		Conversion*	operator=(Conversion const & rhs);

		class WrongInput : public std::exception // exception for a wrong parsing thrown in "void convert(void)";
		{
			public: 
				virtual const char* what() const throw() 
				{
					return ("Wrong input, usage : ./convert string to convert, of type char, int, double, float");
				}
		};

		void		convert(void);
		std::string get_value(void) const;

		void		int_display(void);
		void		char_display(void);
		void		float_display(void);
		void		double_display(void);
	private:
		std::string	_value;
		double		_converted_value;
};

#endif