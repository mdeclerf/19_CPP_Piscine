#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "is the Mutantstack empty ? " << mstack.empty() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "is the Mutantstack empty ? " << mstack.empty() << std::endl;
	std::cout << "-----------------------------------------" << std::endl;

	std::cout << "top element of mstack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "top element of mstack: " << mstack.top() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	std::cout << "-----------------------------------------" << std::endl;

	mstack.push(3);
	mstack.push(12);
	mstack.push(26);
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	while (it1 != ite1) 
	{
		std::cout << "first iteration through stack : " << *it1 << std::endl;
		++it1;
	}

	std::cout << "-----------------------------------------" << std::endl;
	mstack.push(7);
	mstack.push(13);
	mstack.push(99);
	MutantStack<int>::iterator it2 = mstack.begin();
	MutantStack<int>::iterator ite2 = mstack.end();
	it2 +=4;
	ite2 -=1;
	while (it2 != ite2) 
	{
		std::cout << "second iteration through stack : " << *it2 << std::endl;
		++it2;
	}
	return 0;
}
