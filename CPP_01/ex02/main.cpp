#include <iostream>
#include <string>

// Usage : ./string

int main()
{	
	std::string sentence = "HI THIS IS BRAIN";
	std::string *stringPTR = &sentence;
	std::string &stringREF = sentence;

	std::cout << "adress of the string                 : " << &sentence << std::endl;
	std::cout << "adress of the string using stringPTR : " << &stringPTR << std::endl;
	std::cout << "adress of the string using stringREF : " << &stringREF << std::endl;

	std::cout << "string using stringPTR : " << *stringPTR << std::endl;
	std::cout << "string using stringREF : " << stringREF << std::endl;
}
// difference between a reference and a pointer : a reference is similar to a const pointer : once 
// initialized to a variable, it cannot be changed to refer to another variable and it cannot be NULL.