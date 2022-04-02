#include "easyfind.hpp"

int main()
{
	std::list<int> test; // list of type int
	test.push_back(12);
	test.push_back(34);
	test.push_back(66);
	test.push_back(78);
	test.push_back(9);
	test.push_back(39);

	std::list<int>::iterator	display_start;
	std::list<int>::iterator	display_end = test.end();
	for (display_start = test.begin(); display_start != display_end; display_start++)
	{
		std::cout << "the list contains : " << *display_start << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	std::list<int>::iterator	it; // iterator it : return value of easyfind
	it = easyfind(test, 66);
	std::cout << *it << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	try
	{
		it = easyfind(test, 8888);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
