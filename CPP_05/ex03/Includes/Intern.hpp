#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		virtual ~Intern(void);
		Intern* operator=(Intern const & rhs);

		class Unknownform : public std::exception
		{
			public: 
				virtual const char* what() const throw() 
				{
					return ("The requested form is not known");
				}
		};

		Form *makeForm(std::string name_form, std::string target_form);
};

#endif