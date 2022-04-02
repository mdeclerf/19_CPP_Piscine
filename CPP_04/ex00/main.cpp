#include "Daughters.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "The Type of j is : " << j->getType() <<  std::endl;
	std::cout << "The Type of i is : " << i->getType() <<  std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << std::endl << "---------------------------------------------" << std::endl;
	
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();
	std::cout << "The Type of wi is " << wi->getType() << std::endl;
	wi->makeSound(); //will output the wrong cat sound = the animal sound // since there is no virtual in front of makeSound(), the ft called is the one of 
	// of WrongAnimal
	wmeta->makeSound();

	std::cout << std::endl << "---------------------------------------------" << std::endl;

	delete(meta);
	delete(j);
	delete(i);
	delete(wmeta);
	delete(wi);
}
