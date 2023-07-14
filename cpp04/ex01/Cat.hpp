#ifndef	CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat( void );
		Cat( std::string type );
		Cat( Cat& other );
		Cat&	operator=( Cat& other );
		void	newIdea( std::string new_idea );
		std::string	showIdeaNbr( int ideaNbr );
		void	showIdeas( void );
		void	makeSound() const;
		~Cat( void );
};

#endif