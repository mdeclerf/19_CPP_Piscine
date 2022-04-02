#ifndef DAUGHTERS_HPP
#define DAUGHTERS_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

//--------------------------------------------Dog---------------------------
class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		virtual	~Dog(void);

		Dog&			operator=(Dog & rhs);

		Brain*			get_brain(void) const;
		void	makeSound(void) const;
	private:
		Brain* _brain;
};

//--------------------------------------------Cat---------------------------
class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual	~Cat(void);

		Cat&			operator=(Cat  & rhs);

		Brain*			get_brain(void) const;
		void	makeSound(void) const;
	private:
		Brain* _brain;
};

#endif