#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

//--------------------------------Animal---------------------------
class Animal
{
	public:
		Animal(void);
		Animal(std::string str);
		Animal(Animal const & src);
		~Animal(void);

		std::string		getType(void) const;
		Animal&			operator=(Animal const & rhs);

		virtual void makeSound(void) const;	// the virtual key word creates a dynamic lonkage, making sure the correct ft is called for an object

	protected:
		std::string _type;
};

//--------------------------------WrongAnimal---------------------------
class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string str);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal(void);

		std::string		getType(void) const;
		WrongAnimal&	operator=(WrongAnimal const & rhs);

		void makeSound(void) const;

	protected:
		std::string _type;
};

#endif