#include "../Includes/MateriaSource.hpp"

//--------------------------Canon-----------------------------------------

MateriaSource::MateriaSource(void)
{
	//std::cout << "Default constructor of MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
		Materia_Inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	//std::cout << "Copy constructor of MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src.Materia_Inventory[i] != NULL)
			delete(src.Materia_Inventory[i]);
		Materia_Inventory[i] = NULL;
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	//std::cout << "Destructor of MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia_Inventory[i] != NULL)
			delete(this->Materia_Inventory[i]);
	}
	return ;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
	//std::cout << "Assignation operator of MateriaSource called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (rhs.Materia_Inventory[i] != NULL)
			this->Materia_Inventory[i] = rhs.Materia_Inventory[i];
	}
	return *this;
}

//---------------------------ft--------------------------------------------

void MateriaSource::learnMateria(AMateria* aMateria)
{
	int i = 0;
	while(i < 4)
	{
		if (this->Materia_Inventory[i] == NULL)
		{
			Materia_Inventory[i] = aMateria;
			break;
		}
		i++;
	}
	return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while(i < 4)
	{
		if (this->Materia_Inventory[i] && this->Materia_Inventory[i]->getType() == type)
			return this->Materia_Inventory[i]->clone();
		i++;
	}
	return NULL;
}
