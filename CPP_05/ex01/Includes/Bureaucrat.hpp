#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int rank);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
		Bureaucrat* operator=(Bureaucrat const & rhs);

		//virtual const char* what() const throw();
		//Returns a null terminated character sequence that may be used to identify the exception.
		//As a virtual function, derived classes may redefine this function so that specific values are returned.
		class GradeTooLowException : public std::exception
		{
			public: 
				virtual const char* what() const throw() 
				{
					return ("Grade is too low (min : 150)");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public: 
				virtual const char* what() const throw()
				{
					return ("Grade is too high (max : 1)");
				}
		};

		std::string		getName(void) const;
		unsigned int	getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);

	private:
		const std::string		_name;
		unsigned int			_grade;
};
// the grade goes from 1 (the highest) to 150 (the lowest)
// incremementing and decrementing a grade : inversed
// increment grade 5 -> 4
// decrement grade 5 -> 6

std::ostream & operator << (std::ostream & o, Bureaucrat const & i);

#endif
