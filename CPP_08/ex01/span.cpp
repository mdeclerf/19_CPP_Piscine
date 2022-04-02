#include "span.hpp"

//------------------------constructors /destructor-------------------
Span::Span() : _n(0)
{
	return ;
}

Span::Span(unsigned int n) : _n(n)
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span()
{
	return ;
}

//------------------------getters-------------------
unsigned int	Span::get_n(void) const
{
	return (this->_n);
}

std::list<int>	Span::get_list(void) const
{
	return (this->_lst);
}

//------------------------overload =-------------------
Span *Span::operator=(Span const & rhs)
{
	this->_n = rhs.get_n();
	this->_lst = rhs.get_list();
	return this;
}

//------------------------extra ft-------------------
void	Span::addNumber(int number)
{
	if (this->_lst.size() == this->_n)
		throw Listfull();
	else
		this->_lst.push_back(number);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->_lst.size() <= 1)
		throw Nospan();

	int smallest;
	int secondsmallest;

	this->_lst.sort(); // void sort(); Sorts the elements in the list, altering their position within the container.
	std::list<int>::const_iterator	it = this->_lst.begin(); // choice of an iterator instead of using _lst.front() : because need to access the second smallest

	smallest = *it;
	it++;
	secondsmallest = *it;
	return (secondsmallest - smallest);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_lst.size() <= 1)
		throw Nospan();

	int biggest;
	int smallest;

	this->_lst.sort();
	smallest = this->_lst.front(); // Returns a reference to the first element in the list container.

	std::reverse(this->_lst.begin(), this->_lst.end()); // Reverses the order of the elements in the range [first,last).
	biggest = this->_lst.front();
	return (biggest - smallest);
}

void	Span::print_list()
{
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = this->_lst.end();

	int i = 1;
	for(it = this->_lst.begin(); it != ite; ++it)
	{
		std::cout << i << ": " << *it << std::endl;
		i++;
	}
}
