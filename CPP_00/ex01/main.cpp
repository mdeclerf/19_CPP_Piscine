# include "Phonebook.hpp"

int	main()
{
	std::string	buff;
	Phonebook	book;
	int			i;

	i = 0;
	while (1)
	{
		std::getline(std::cin, buff);
		if (buff == "EXIT")
			return (0);
		else if (buff == "ADD")
		{
			book.add_contact(i);
			i++;
		}
		else if (buff == "SEARCH")
		{
			if (book.get_index() == 0)
				continue;
			book.get_contact_list(book.get_index());
			std::cout << "Enter an index between 0 and 7 " << std::endl;
			std::getline(std::cin, buff);
			if (buff.size() > 1 || (buff[0] < '0' || buff[0] > '7'))
				std::cout << "Invalid index" << std::endl;
			else
				book.get_single_contact(std::stoi (buff, NULL, 10));
		}
	}
}