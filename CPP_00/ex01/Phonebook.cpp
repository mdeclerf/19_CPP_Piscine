# include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::add_contact(int i)
{
	std::string buff;
	
	if (i >= 8)
		i = i % 8;
	else
		this->_index++;

	std::cout << "Fill in first name ";
	std::getline(std::cin, buff);
	this->list[i].set_first_name(buff);

	std::cout << "Fill in last name ";
	std::getline(std::cin, buff);
	this->list[i].set_last_name(buff);

	std::cout << "Fill in nickname ";
	std::getline(std::cin, buff);
	this->list[i].set_nickname(buff);

	std::cout << "Fill in phone number ";
	std::getline(std::cin, buff);
	this->list[i].set_phone_number(buff);

	std::cout << "Fill in darkest secret ";
	std::getline(std::cin, buff);
	this->list[i].set_darkest_secret(buff);
}

std::string	trunc(std::string str)
{
	std::string	tmp;
	tmp = str;
	if (tmp.size() > 10)
	{
		tmp.resize(9);
		tmp+='.';
	}
	return (tmp);
}

void	Phonebook::get_contact_list(int v)
{
	int	i;

	i = 0;
	while (i < v)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setw(10) << trunc(list[i].get_first_name());
		std::cout <<  "|";
		std::cout << std::setw(10) << trunc(list[i].get_last_name());
		std::cout << "|";
		std::cout << std::setw(10) << trunc(list[i].get_nickname()) << std::endl;
		i++;
	}
	return ;
}

void	Phonebook::get_single_contact(int v) const
{
	if (v > this->_index)
	{
		std::cout << "No contact at this index" << std::endl;
		return ;
	}
	std::cout << this->list[v].get_first_name() << std::endl;
	std::cout << this->list[v].get_last_name() << std::endl;
	std::cout << this->list[v].get_nickname() << std::endl;
	std::cout << this->list[v].get_phone_number() << std::endl;
	std::cout << this->list[v].get_darkest_secret() << std::endl;
	return ;
}

int		Phonebook::get_index(void) const
{
	return this->_index;
}
