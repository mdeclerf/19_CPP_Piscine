#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	// the key word new creates and allocates on the heap
	Zombie *new_zombie = new Zombie(name);
	return (new_zombie);
}
