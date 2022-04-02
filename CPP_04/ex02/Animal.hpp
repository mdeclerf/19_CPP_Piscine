#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const & src);
		virtual		~AAnimal(void);
		AAnimal*	operator=(AAnimal const & rhs);

		virtual void	makeSound(void) const = 0; // adding a =0 makes the ft makeSound a pure method :
		// it cannot be implemented but all the classes inheriting from AAnimal have to have a makeSound behavior
		std::string		getType(void) const;
	protected:
		std::string _type;
};

#endif