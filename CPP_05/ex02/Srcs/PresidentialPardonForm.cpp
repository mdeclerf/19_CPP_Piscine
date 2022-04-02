#include "../Includes/PresidentialPardonForm.hpp"

//-------------------------------canon-----------------------
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", "Default target", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form("PresidentialPardonForm", src.getTarget(), 25, 5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm* PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->_target = rhs.getTarget();
	this->_signed = rhs.get_signed_status();
	return (this);
}

//-----------------------------ft----------------------------
void	PresidentialPardonForm::beSigned(Bureaucrat &name)
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

void	PresidentialPardonForm::execute(Bureaucrat &name)
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
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	return ;
}
