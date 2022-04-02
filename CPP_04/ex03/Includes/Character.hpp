#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter // inherits from the interface ICharacter
// menas : needs to have all the ft defined in ICharacter.hpp
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & src);
		virtual ~Character(void);
		Character& operator=(Character const & rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria *Materia_Inventory[4];
};

#endif
