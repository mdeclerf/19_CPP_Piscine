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

void	Karen::_level_display(int i)
{
	std::string actions_name[] = {"[ DEBUG ] ", "[ INFO ] ", "[ WARNING ] ", "[ ERROR] "};
	typedef void(Karen::*my_ptr_to_ft)(void); // typedef a pointer to a Karen function taking void param
	my_ptr_to_ft actions[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error}; // declaring an array of my_ptr_to_ft and making them point to each private Karen function
	while(i < 4)
	{
		std::cout << actions_name[i] << std::endl;
		(this->*(actions[i]))();
		std::cout << std::endl;
		i++;
	}
}

void	Karen::complain( std::string level)
{
	std::string actions_name[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (level == actions_name[i]) // to determine from which level to start complaining
			break;
		i++;
	}
	switch(i) // switch on the int i : the value of i is compared with the values of each case and the code executed if there is a match
	{
		case 0:
			_level_display(i);
			break;
		case 1:
			_level_display(i);
			break;
		case 2:
			_level_display(i);
			break;
		case 3:
			_level_display(i);
			break;
		case 4: // if none of the level has been found
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
