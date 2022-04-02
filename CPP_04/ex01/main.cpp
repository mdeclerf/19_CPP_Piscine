#include "Daughters.hpp"

// Shallow vs deep memory : https://www.learncpp.com/cpp-tutorial/shallow-vs-deep-copying/

int main()
{
	Animal* array[12];
	for (int i = 0; i < 12; i++)
	{
		std::cout << i << std::endl;
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	std::cout << std::endl;
	for (int i = 0; i < 12; i++)
	{
		std::cout << i << std::endl;
		array[i]->makeSound();
	}

	std::cout << std::endl;
	for (int j = 0; j < 12; j++)
	{
		std::cout << j << std::endl;
		delete (array[j]);
	}

	std::cout << "-------------------------" << std::endl;
	Dog test = Dog();
	Dog testb = Dog(test);

	std::cout << "-------------------------" << std::endl;
}
