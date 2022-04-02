#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
		Animal(std::string str);
		Animal(Animal const & src);
		virtual ~Animal(void); // if the destructor is not virtual, deleting an instance of the daughter classes will only call the destructor of
		//Animal instead of the destructor of the mother and daughter classes, which is problematic since the daughter classes remain undestructed
		// which results in memory leaks

		std::string		getType(void) const;
		Animal*			operator=(Animal const & rhs);

		virtual void	makeSound(void) const;

	protected:
		std::string _type;
};

#endif
