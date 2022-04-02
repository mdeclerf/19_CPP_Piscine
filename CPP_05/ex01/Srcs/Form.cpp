#include "../Includes/Form.hpp"

//-------------------------------canon-----------------------
Form::Form() : _name("Default"), _signed(0), _signing_min_grade(50), _executing_min_grade(50)
{
	return ;
}

Form::Form(std::string name, unsigned int signing, unsigned int executing) : _name(name), _signed(0), _signing_min_grade(signing), _executing_min_grade(executing)
{
	//--------------------------signing-------------------------------------
	if (signing < 1)
	{
		std::cout << "Issue at the creation of " << this->_name << " : signing grade -> ";
		throw Form::GradeTooHighException();
	}
	else if (signing > 150)
	{
		std::cout << "Issue at the creation of " << this->_name << " : signing grade -> ";
		throw Form::GradeTooLowException();
	}

	//--------------------------executing-------------------------------------
	if (executing < 1)
	{
		std::cout << "Issue at the creation of " << this->_name << " : executing grade -> ";
		throw Form::GradeTooHighException();
	}
	else if (executing > 150)
	{
		std::cout << "Issue at the creation of " << this->_name << " : executing grade -> ";
		throw Form::GradeTooLowException();
	}
	return ;
}

Form::Form(Form const & src) : _signing_min_grade(src.get_signing_min_grade()), _executing_min_grade(src.get_executing_min_grade())
{
	this->_signed = src.get_signed_status();
	return ;
}

Form::~Form()
{
	return ;
}

Form* Form::operator=(Form const & rhs)
{
	this->_signed = rhs.get_signed_status();
	return this;
}

//-------------------------------getters-----------------------
std::string		Form::getName(void) const
{
	return (this->_name);
}

bool			Form::get_signed_status(void) const
{
	return (this->_signed);
}

unsigned int	Form::get_signing_min_grade(void) const
{
	return (this->_signing_min_grade);
}

unsigned int	Form::get_executing_min_grade(void) const
{
	return (this->_executing_min_grade);
}

//-------------------------------getters-----------------------
void			Form::beSigned(Bureaucrat &name)
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

//----------------overload << ------------------------------------------
std::ostream & operator << (std::ostream & o, Form const & i)
{
	if (i.get_signed_status() == 1)
		o << "Form " << i.getName() << " (Required grade to sign : " << i.get_signing_min_grade() << " / Required grade to execute : " << i.get_executing_min_grade() << ") is SIGNED";
	else
		o << "Form " << i.getName() << " (Required grade to sign : " << i.get_signing_min_grade() << " / Required grade to execute : " << i.get_executing_min_grade() << ") is NOT SIGNED";
	return(o);
}
