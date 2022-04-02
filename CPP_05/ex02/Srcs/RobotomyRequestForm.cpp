#include "../Includes/RobotomyRequestForm.hpp"
#include <random>

//-------------------------------canon-----------------------
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", "Default target", 75, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 75, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form("RobotomyRequestForm", src.getTarget(), 75, 45)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm* RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->_target = rhs.getTarget();
	this->_signed = rhs.get_signed_status();
	return (this);
}

//-----------------------------ft----------------------------
void	RobotomyRequestForm::beSigned(Bureaucrat &name)
{
	if (name.getGrade() > this->_signing_min_grade)
	{
		std::cout << "Issue with signing request of : " << this->_name << " (minimum signing grade : " << this->_signing_min_grade << ") -> ";
		throw Form::GradeTooLowException();
	}
	else
	{
		std::cout << name.getName() << " signed " << this->_name << std::endl;
		this->_signed = 1;
	}
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat &name)
{
	if (name.getGrade() > this->_executing_min_grade)
	{
		std::cout << "Issue with execution request of : " << this->_name << " (minimum signing grade : " << this->_signing_min_grade << ") -> ";
		throw Form::GradeTooLowException();
	}
	else if (this->_signed == 0)
	{
		std::cout << "Issue with execution request of : " << this->_name << " -> ";
		throw Form::Executionattemptwithoutsignature();
	}
	else
	{
		bool randomBool = rand() % 2;
		if (randomBool)
		{
			std::cout << "BBBBBZZZzzzzzzzZZZZZZZzzzzzzzzzzzzzzzzzzzzzzzzzz BBBBBZZZzzzzzzzZZZZZZZzzzzzzzzzzzzzzzzzzzzzzzzzz" << std::endl;
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		}
		else
			std::cout << "Failure at the robotomization of " << this->_target << std::endl;
	}
	return ;
}
