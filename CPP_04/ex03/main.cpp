#include "Includes/MateriaSource.hpp"
#include "Includes/Character.hpp"
#include "Includes/Cure.hpp"
#include "Includes/Ice.hpp"
#include <string>
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("blooooobobobobobobo");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	ICharacter* patrick = new Character("patrick");
	me->use(0, *bob);
	me->use(1, *patrick);
	me->use(2, *bob);
	me->use(3, *patrick);
	me->use(34, *bob);
	
	delete bob;
	delete patrick;
	delete src;
	delete me;
	//system("leaks exec");
	return 0;
}

