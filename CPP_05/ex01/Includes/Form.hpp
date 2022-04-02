#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
	public:
		//-------------------------canon------------------------------
		Form(void);
		Form(std::string name, unsigned int signing, unsigned int executing);
		Form(Form const & src);
		~Form(void);
		Form* operator=(Form const & rhs);
		//-------------------------exceptions---------------------------
		class GradeTooLowException : public std::exception
		{
			public: 
				virtual const char* what() const throw() 
				{
					return ("Grade is too low");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public: 
				virtual const char* what() const throw()
				{
					return ("Grade is too high");
				}
		};
		//-------------------------getters---------------------------
		std::string		getName(void) const;
		bool			get_signed_status(void) const;
		unsigned int	get_signing_min_grade(void) const;
		unsigned int	get_executing_min_grade(void) const;
		//-------------------------extra ft---------------------------
		void			beSigned(Bureaucrat &name);
	private:
		const std::string		_name;
		bool					_signed;
		const unsigned int		_signing_min_grade;
		const unsigned int		_executing_min_grade;
};

std::ostream & operator << (std::ostream & o, Form const & i);

#endif