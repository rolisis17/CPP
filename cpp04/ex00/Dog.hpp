#ifndef	DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		Dog( std::string type );
		Dog( Dog& other );
		Dog&	operator=( Dog& other );
		void	makeSound( void ) const;
		~Dog( void );
};

#endif