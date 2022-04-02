#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}

void	Karen::complain( std::string level)
{
	// declaring an array of string containing the name of each private Karen function
	std::string actions_name[] = {"debug", "info", "warning", "error"};
	
	// defining my_ptr_to_ft : a pointer to a Karen member function that takes void param
	typedef void(Karen::*my_ptr_to_ft)(void);

	// declaring an array of my_ptr_to_ft and making them point to each private Karen function
	my_ptr_to_ft actions[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	
	int i = 0;
	while (i < 4)
	{
		if (level == actions_name[i])
		{
			//this->* : because the pointee is within the class Karen
			(this->*(actions[i]))();
			break;
		}
		i++;
	}
}
