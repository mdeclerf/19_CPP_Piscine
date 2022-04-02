#include "../Includes/Character.hpp"

//--------------------------Canon-----------------------------------------
Character::Character() : ICharacter()
{
	//std::cout << "Default constructor of Character called" << std::endl;
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
		Materia_Inventory[i] = NULL;
	return ;
}

Character::Character(std::string name)
{
	//std::cout << "Constructor of Character called" << std::endl;
	this->_name = name;
	for (int i = 0; i < 4; i++)
		Materia_Inventory[i] = NULL;
	return ;
}

//The old Materia of a Character must be deleted.
Character::Character(Character const & src) : ICharacter()
{
	//std::cout << "Copy constructor of Character called" << std::endl;
	this->_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src.Materia_Inventory[i] != NULL)
			delete(src.Materia_Inventory[i]);
		Materia_Inventory[i] = NULL;
	}
	return ;
}

Character::~Character()
{
	// std::cout << "Destructor of Character called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia_Inventory[i] != NULL)
			delete(this->Materia_Inventory[i]);
	}
	return ;
}

Character& Character::operator=(Character const & rhs)
{
	//std::cout << "Assignation operator of Character called" << std::endl;
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (rhs.Materia_Inventory[i] != NULL)
			this->Materia_Inventory[i] = rhs.Materia_Inventory[i];
	}
	return *this;
}

//-----------------------------Getters---------------------------------
std::string const & Character::getName() const
{
	return (this->_name);
}

//---------------------------Ft-----------------------------------
void Character::equip(AMateria* m)
{
	int i = 0;
	if (m == NULL)
		return ;
	while (i < 4)
	{
		if (this->Materia_Inventory[i] == NULL)
		{
			Materia_Inventory[i] = m;
			break ;
		}
		i++;
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		Materia_Inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < 4) && Materia_Inventory[idx] != NULL)
		Materia_Inventory[idx]->use(target);
	return ;
}
