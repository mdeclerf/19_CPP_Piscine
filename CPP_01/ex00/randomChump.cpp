#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *new_zombie = new Zombie(name);
	new_zombie->announce();
	delete new_zombie;
}
// new_zombie is free with "delete" once it has announced itself
