#ifndef	BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain( void );
		Brain( std::string new_idea );
		Brain( Brain& other );
		void	newIdea( std::string new_idea );
		std::string	showIdeaNbr( int ideaNbr );
		void	showIdeas( void );
		Brain&	operator=( Brain& other );
		~Brain( void );
};

#endif