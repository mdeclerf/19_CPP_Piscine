#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Ernest("Ernest");
	Ernest.attack("Jean-Jacques");
	Ernest.takeDamage(5);
	Ernest.beRepaired(2);
	Ernest.takeDamage(1);

	std::cout << "----------------------" << std::endl;
	
	ScavTrap Patrick = ScavTrap("Patrick");
	Patrick.attack("target ");
	Patrick.takeDamage(5);
	Patrick.beRepaired(2);
	Patrick.takeDamage(1);
	Patrick.guardGate();

	std::cout << "----------------------" << std::endl;
	
	FragTrap Marcel = FragTrap("Marcel");
	Marcel.attack("target ");
	Marcel.takeDamage(10);
	Marcel.beRepaired(5);
	Marcel.takeDamage(3);
	Marcel.highFivesGuys();
}