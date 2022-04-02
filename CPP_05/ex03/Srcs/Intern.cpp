#include "../Includes/Intern.hpp"
#include "../Includes/PresidentialPardonForm.hpp"
#include "../Includes/RobotomyRequestForm.hpp"
#include "../Includes/ShrubberyCreationForm.hpp"

//--------------------------canon----------------------
Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern* Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return this;
}

//----------------------Ft---------------------------
Form*	Intern::makeForm(std::string name_form, std::string target_form)
{
	std::string form_names[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int i = 0;
	Form * ret;
	while (i < 3)
	{
		if (name_form == form_names[i])
			break;
		i++;
	}
	switch(i)
	{
		case 0:
		{
			ret = new ShrubberyCreationForm(target_form);
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return ret;
		}
		case 1:
		{
			ret = new RobotomyRequestForm(target_form);
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return ret;
		}
		case 2:
		{
			ret = new PresidentialPardonForm(target_form);
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return ret;
		}
		case 3:
		{
			std::cout << name_form << " : ";
			throw Intern::Unknownform();
		}
	}
	return NULL;
}
