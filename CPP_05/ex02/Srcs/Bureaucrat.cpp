#include "../Includes/Bureaucrat.hpp"
#include "../Includes/Form.hpp"

//-------------------------------canon-----------------------
Bureaucrat::Bureaucrat() : _name("Default") , _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int rank) : _name(name)
{
	if (rank < 1)
	{
		std::cout << "Issue with : " << this->_name << " -> ";
		throw Bureaucrat::GradeTooHighException();
	}
	else if (rank > 150)
	{
		std::cout << "Issue with : " << this->_name << " -> ";
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->_grade = rank;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat* Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs.getGrade();
	return this;
}

//-------------------------------getters-----------------------
std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

//-------------------------------increm / decrem-----------------------
void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
	{
		std::cout << "Issue with : " << this->_name << " -> ";
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade--;
	return ;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
	{
		std::cout << "Issue with : " << this->_name << " -> ";
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade++;
	return ;
}

void	Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

//----------------overload << ------------------------------------------
std::ostream & operator << (std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return(o);
}
