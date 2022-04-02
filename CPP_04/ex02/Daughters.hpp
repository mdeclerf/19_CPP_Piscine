#ifndef DAUGHTERS_HPP
#define DAUGHTERS_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

//--------------------------------------------Dog---------------------------
class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog&			operator=(Dog & rhs);

		Brain*			get_brain(void) const;
		virtual void	makeSound(void) const;
	private:
		Brain*			_brain;
};

//--------------------------------------------Cat---------------------------
class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat&			operator=(Cat  & rhs);

		Brain*			get_brain(void) const;
		virtual void	makeSound(void) const;

	private:
		Brain*			_brain;
};

#endif