#ifndef	DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		Dog( void );
		Dog( std::string type );
		Dog( Dog& other );
		Dog&	operator=( Dog& other );
		void	makeSound() const;
		void	newIdea( std::string new_idea );
		std::string	showIdeaNbr( int ideaNbr );
		void	showIdeas( void );
		~Dog( void );
};

#endif