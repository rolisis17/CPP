#ifndef	CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( std::string type );
		Cat( Cat& other );
		Cat&	operator=( Cat& other );
		void	makeSound( void ) const;
		~Cat( void );
};

#endif