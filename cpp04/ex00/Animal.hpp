#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
        std::string type;

	public:
		Animal( void );
		Animal( std::string type );
		Animal( Animal& other );
		Animal&	operator=( Animal& other );
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		~Animal( void );
};

#endif