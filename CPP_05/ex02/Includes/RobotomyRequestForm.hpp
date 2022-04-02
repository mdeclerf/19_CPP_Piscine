#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "../Includes/Form.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm* operator=(RobotomyRequestForm const & rhs);
		
		virtual void	beSigned(Bureaucrat &name);
		virtual void	execute(Bureaucrat &name);
};

#endif