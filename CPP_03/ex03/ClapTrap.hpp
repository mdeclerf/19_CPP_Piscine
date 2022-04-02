#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);								//constructor by default
		ClapTrap(std::string name);					//constructor
		ClapTrap(ClapTrap const & src);				//copy constructor
		~ClapTrap(void);							//destructor

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string		get_name(void) const;
		unsigned int	get_Hitpoints(void) const;
		unsigned int	get_Energypoints(void) const;
		unsigned int	get_Attackdamage(void) const;

		ClapTrap & operator=(ClapTrap const & rhs);	//overload of the assignment operator

	protected:
		std::string		_name;
		unsigned int	_Hitpoints;
		unsigned int	_Energypoints;
		unsigned int	_Attackdamage;
};

#endif