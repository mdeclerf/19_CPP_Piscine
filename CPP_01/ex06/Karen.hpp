#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>
#include <string>

class Karen
{
	public:
		Karen(void);
		~Karen(void);
		void complain( std::string level);
		
	private:
		void	_level_display(int i);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif