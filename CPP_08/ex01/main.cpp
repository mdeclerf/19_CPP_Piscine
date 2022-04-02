#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(33);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-----------------------------------------------------------" << std::endl;
	sp.print_list();
	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;

	std::cout << "-----------------------------------------------------------" << std::endl;
	Span test = Span(25);
	srand (time(NULL));
	for(unsigned int i = 0; i < test.get_n(); i++)
	{
		test.addNumber(rand() % 100);
	}
	test.print_list();
	std::cout << "shortest span : " << test.shortestSpan() << std::endl;
	std::cout << "longest span : " << test.longestSpan() << std::endl;
}
