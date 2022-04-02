# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	public:
		Contact(void);
		~Contact(void);

		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
	
		void		set_first_name(std::string str);
		void		set_last_name(std::string str);
		void		set_nickname(std::string str);
		void		set_phone_number(std::string str);
		void		set_darkest_secret(std::string str);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		void		get_contact_list(int v);
		void		get_single_contact(int v) const;
		void		add_contact(int i);
		int			get_index(void) const;
		Contact		list[8];

	private:
		int			_index;
};

# endif

//std::toupper()

//replace oldest contact instead of error

// buff == "ADD"

//1 fichier hpp par classe
//1 main de test et 1 fichier d'implementation

//std::setw(10) << trunc etc...

//ctrl d : back deux lignes et || buff == ""

// search sans add : 			if (book.index == 0)
//				continue;

//pas tout en public : faire des getters et des setters : getter const / setter pas const

//getline pour champs apres add

//statique dans une ft implementation pas a ajouter Account::

//makefile -I.