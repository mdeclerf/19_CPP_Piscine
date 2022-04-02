#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);								//constructor by default
		FragTrap(std::string name);					//constructor
		FragTrap(FragTrap const & src);				//copy constructor
		~FragTrap(void);							//destructor
		
		FragTrap & operator=(FragTrap const & rhs);	//overload of the assignment operator
		void highFivesGuys(void);
};

#endif