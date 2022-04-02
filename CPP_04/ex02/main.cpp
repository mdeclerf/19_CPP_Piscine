#include "Daughters.hpp"

int main()
{
	AAnimal *test = new Dog();
	AAnimal *yolo = new Cat();
	test->makeSound();
	yolo->makeSound();
	//AAnimal wontcompile;
	//main.cpp:9:10: error: variable type 'AAnimal' is an abstract class
	//    AAnimal wontcompile;
	delete (test);
	delete (yolo);
}
