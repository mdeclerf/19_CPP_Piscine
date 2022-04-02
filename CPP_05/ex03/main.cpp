#include "Includes/Bureaucrat.hpp"
#include "Includes/PresidentialPardonForm.hpp"
#include "Includes/ShrubberyCreationForm.hpp"
#include "Includes/RobotomyRequestForm.hpp"
#include "Includes/Intern.hpp"
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
	std::cout << "----------------EX 02--------------------------------" << std::endl;

	Bureaucrat	Albertine("Albertine", 147);
	ShrubberyCreationForm A("Houuuuuuuuuse");
	RobotomyRequestForm B("Paulette");
	PresidentialPardonForm C("Jean_Jacques");
	
	std::cout << std::endl;
	std::cout << "----------------------------A : ShrubberyCreationForm-----------------------" << std::endl;
	std::cout << std::endl;

	try
	{
		A.execute(Raymond);
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		A.beSigned(Albertine);
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		A.beSigned(Raymond);
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << A <<std::endl;

	try
	{
		Albertine.executeForm(A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Raymond.executeForm(A);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "----------------------------B : RobotomyRequestForm-----------------------" << std::endl;
	std::cout << std::endl;

	try
	{
		B.beSigned(Albertine);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B <<std::endl;
	
	try
	{
		B.beSigned(Jean_Claude);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << B <<std::endl;

	try
	{
		Raymond.executeForm(B);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "----------------------------C : PresidentialPardonForm-----------------------" << std::endl;
	std::cout << std::endl;

	try
	{
		C.beSigned(Raymond);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << A <<std::endl;

	try
	{
		Raymond.executeForm(C);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Jean_Claude.executeForm(C);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "----------------EX 03--------------------------------" << std::endl;

	Intern  someRandomIntern;
	Form*   rrf;
	Form*   wrongform;
	
	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	rrf->beSigned(Jean_Claude);
	Jean_Claude.executeForm(*rrf);

	try
	{
		wrongform = someRandomIntern.makeForm("blaaaaaablabla", "Joe");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete (wrongform);
	//system("leaks exec");
	return (0);
}
