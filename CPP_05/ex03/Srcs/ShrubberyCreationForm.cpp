#include "../Includes/ShrubberyCreationForm.hpp"
#include <random>

//-------------------------------canon-----------------------
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", "Default target", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form("ShrubberyCreationForm", src.getTarget(), 145, 137)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm* ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs.getTarget();
	this->_signed = rhs.get_signed_status();
	return (this);
}

//-----------------------------ft----------------------------
void	ShrubberyCreationForm::beSigned(Bureaucrat &name)
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

void	ShrubberyCreationForm::execute(Bureaucrat &name)
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
		std::ofstream ofs(this->_target);
		ofs <<"	     v" << std::endl;
		ofs <<"        >X<" << std::endl;
		ofs <<"         A" << std::endl;
		ofs <<"        d$b" << std::endl;
		ofs <<"      .d|$$b." << std::endl;
		ofs <<"    .d$i$$|$$b." << std::endl;
		ofs <<"       d$$@b" << std::endl;
		ofs <<"      d|$$$ib" << std::endl;
		ofs <<"    .d$$$|$$$b" << std::endl;
		ofs <<"  .d$$@$$$$|$$ib." << std::endl;
		ofs <<"      d$$i$$b" << std::endl;
		ofs <<"     d|$$$$@$b" << std::endl;
		ofs <<"  .d$@$$|$$$$$@b." << std::endl;
		ofs <<".d$$$$i$$$|$$$$$$b." << std::endl;
		ofs <<"        ###" << std::endl;
		ofs <<"        ###" << std::endl;
		ofs <<"        ### mh" << std::endl;
		ofs.close();
	}
	return ;
}