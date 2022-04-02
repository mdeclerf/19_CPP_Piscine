#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	
	DiamondTrap Lisette = DiamondTrap("Lisette");
	Lisette.print_points();
	Lisette.attack("target ");
	Lisette.takeDamage(10);
	Lisette.beRepaired(5);
	Lisette.takeDamage(3);
	Lisette.highFivesGuys();
	Lisette.guardGate();
	Lisette.whoAmI();

	std::cout << "----------------------" << std::endl;
}
