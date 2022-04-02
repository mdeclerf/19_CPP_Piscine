#include "Includes/Bureaucrat.hpp"
#include "Includes/Form.hpp"
#include <stdexcept>

int main()
{
	std::cout << "----------------EX 00--------------------------------" << std::endl;
	std::cout << std::endl;
	Bureaucrat	Raymond("Raymond", 12);
	Bureaucrat	Jean_Claude("Jean_Claude", 1);
	std::cout << Raymond << std::endl;
	std::cout << Jean_Claude << std::endl;
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

	std::cout << std::endl;
	std::cout << "----------------EX 01--------------------------------" << std::endl;
	
	Form A("A", 56, 77);
	Form B("B", 6, 100);
	try
	{
		Form C("C", 666, 777);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << A << std::endl;
	std::cout << B << std::endl;

	A.beSigned(Jean_Claude);
	std::cout << A << std::endl;

	try
	{
		B.beSigned(Raymond);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << A << std::endl;
	std::cout << B << std::endl;

	return (0);
}
