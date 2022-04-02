#ifndef DAUGHTERS_HPP
#define DAUGHTERS_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

//--------------------------------------------Dog---------------------------
class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog&			operator=(Dog const & rhs);

		virtual void	makeSound(void) const;
};

//--------------------------------------------Cat---------------------------
class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat&			operator=(Cat const & rhs);

		virtual void	makeSound(void) const;
};

//--------------------------------------------WrongCat---------------------------
class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const & src);
		~WrongCat(void);

		WrongCat&	operator=(WrongCat const & rhs);

		void		makeSound(void) const;
};

#endif
