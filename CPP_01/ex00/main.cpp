#include "Zombie.hpp"

// Usage : ./zombie

Zombie* newZombie(std::string name); // function that will create a Zombie, name it, and return it.
void randomChump( std::string name); // function that will create a Zombie, and make it announce itself.

int main()
{
	Zombie Raymond = Zombie("Raymond");
	Zombie *Jean_Claude = newZombie("Jean-Claude");
	Raymond.announce();
	Jean_Claude->announce();
	randomChump("Monique");
	delete Jean_Claude;
	return (0);
}
