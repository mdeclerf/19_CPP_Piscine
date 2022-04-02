#include <iostream>
#include <string>

class Base
{
	public: 
		virtual ~Base(void) {}
};
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base * generate(void) // randomly instanciates A, B or C and returns the instance as a Base pointer.
{
	// https://www.cplusplus.com/reference/cstdlib/rand/
	int random = rand()%3;
	if (random == 0)
	{
			std::cout << "generate(void) : A" << std::endl;
			return (new A);
	}
	else if (random == 1)
	{
			std::cout << "generate(void) : B" << std::endl;
			return (new B);
	}
	else
	{
			std::cout << "generate(void) : C" << std::endl;
			return (new C);
	}
}

void identify(Base* p) // displays "A", "B" or "C" according to the real type of p.
{
	A *testa = dynamic_cast<A *>(p);
	B *testb = dynamic_cast<B *>(p);
	C *testc = dynamic_cast<C *>(p);
	// the dynamic cast will return NULL if the conversion is impossible (eg the randomly instanciated class is of type B and the type we want to cast p is of type A*)
	if (testa)
		std::cout << "identify(Base *p) : A" << std::endl;
	else if (testb)
		std::cout << "identify(Base *p) : B" << std::endl;
	else if (testc)
		std::cout << "identify(Base *p) : C" << std::endl;
	return;
}

void identify(Base& p) // displays "A", "B" or "C" according to the real type of p.
{

	try
	{
		A &test = dynamic_cast<A &>(p);
		std::cout << "identify(Base &p) : A" << std::endl;
		(void)test;
		return ;
	}
	catch(std::bad_cast &bc)
	{
		
	}

	try
	{
		B &test = dynamic_cast<B &>(p);
		std::cout << "identify(Base &p) : B" << std::endl;
		(void)test;
		return ;
	}
	catch(std::bad_cast &bc)
	{
		
	}

	try
	{
		C &test = dynamic_cast<C &>(p);
		std::cout << "identify(Base &p) : C" << std::endl;
		(void)test;
		return ;
	}
	catch(std::bad_cast &bc)
	{
		
	}
}

int main()
{
	srand(time(NULL)); // initialize the seed of random in each run of the code 
	// to get a different random result by srand. Using time(NULL) to set a different seed of random through srand.
	// https://stackoverflow.com/questions/52801380/srandtimenull-function
	
	Base * test = NULL;
	test = generate();
	std::cout << "--------------" << std::endl;
	identify(test); // void identify(Base* p)
	std::cout << "--------------" << std::endl;
	identify(*test); // test is dereferenced so that the "void identify(Base& p)" is used
}