#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

//Use of virtual for the inheritance of Scav and Frag : allows to get only one instance of the claptrap class, shared by both scav and trap
//Because there is only one ClapTrap, the constructor is not called by the class that inherits it (scav and frag) but by the diamond class
//https://www.cprogramming.com/tutorial/virtual_inheritance.html

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);							//constructor by default
		DiamondTrap(std::string name);				//constructor
		DiamondTrap(DiamondTrap const & src);		//copy constructor
		~DiamondTrap(void);							//destructor
		DiamondTrap & operator=(DiamondTrap const & rhs);

		std::string		get_name(void) const;

		void			print_points(void) const;
		void			whoAmI(void) const;
	private:
		std::string _name;
};
#endif