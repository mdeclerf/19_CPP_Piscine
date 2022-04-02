#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "../Includes/Form.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm* operator=(PresidentialPardonForm const & rhs);
		
		virtual void	beSigned(Bureaucrat &name);
		virtual void	execute(Bureaucrat &name);
};

#endif
