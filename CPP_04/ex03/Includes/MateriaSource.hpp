#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>
#include <iostream>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource(void);
		MateriaSource& operator=(MateriaSource const & rhs);

		virtual void learnMateria(AMateria* aMateria);
		virtual AMateria* createMateria(std::string const & type);
	
	private:
		AMateria *Materia_Inventory[4];

};

#endif