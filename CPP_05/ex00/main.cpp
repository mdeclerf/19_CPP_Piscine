#include "Bureaucrat.hpp"
#include <stdexcept>

int main()
{


	Bureaucrat	Raymond("Raymond", 12);
	Bureaucrat	Jean_Claude("Jean_Claude", 1);
	std::cout << Raymond << std::endl;
	std::cout << Jean_Claude << std::endl;

	try
	{
		Bureaucrat	Denise("Denise", 345);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Raymond.incrementGrade();
		Jean_Claude.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Raymond << std::endl;
	std::cout << Jean_Claude << std::endl;

	try
	{
		for (int i = 0; i < 12; i++)
		{
			Raymond.decrementGrade();
			Jean_Claude.decrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << Raymond << std::endl;
	std::cout << Jean_Claude << std::endl;
	return (0);
}
