#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "../Includes/Form.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm* operator=(ShrubberyCreationForm const & rhs);
		
		virtual void	beSigned(Bureaucrat &name);
		virtual void	execute(Bureaucrat &name);
};

#endif