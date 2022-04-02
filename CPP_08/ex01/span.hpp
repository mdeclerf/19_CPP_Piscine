#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <list>

//Make a class in which you can store N ints. N will be an unsigned int, and will be passed to the constructor as its only parameter.
class Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const & src);
		~Span(void);
		unsigned int	get_n(void) const;
		std::list<int>	get_list(void) const;
		Span *operator=(Span const & rhs);

		void	addNumber(int number); // This class will have a function to store a single number (addNumber)

		class Listfull : public std::exception // in case an attempt to add a number > the maximum number of elements in _lst
		{
			public: 
				virtual const char* what() const throw()
				{
					return ("There are already N numbers stored");
				}
		};

		//shortestSpan and longestSpan: find out the shortest and longest span 
		//between all the numbers contained in the object, and return it.
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		void			print_list(void); // control function

		class Nospan : public std::exception // in case the list doesn't have enough elements to find a span
		{
			public: 
				virtual const char* what() const throw()
				{
					return ("There is no span to be found");
				}
		};
	private:
		unsigned int	_n; // the maximum number of elements in _lst
		std::list<int>	_lst;// the list in which the elements are contained
};

#endif
