#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);								//constructor by default
		ScavTrap(std::string name);					//constructor
		ScavTrap(ScavTrap const & src);				//copy constructor
		~ScavTrap(void);							//destructor
		
		void attack(std::string const & target);

		ScavTrap & operator=(ScavTrap const & rhs);	//overload of the assignment operator
		void guardGate(void);
};

#endif