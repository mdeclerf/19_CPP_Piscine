#include "Zombie.hpp"

// Usage : ./zombie

Zombie* zombieHorde( int N, std::string name); // function that takes an integer N, allocates N Zombie objects and return the pointer to the first Zombie.

int main()
{
	int	i = 12;
	Zombie *horde = zombieHorde(i, "default_Patrick");
	while(i--)
		horde[i].announce();
	delete [] horde;
}
