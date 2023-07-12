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
		virtual void	makeSound( void ) const = 0;
		std::string	getType( void ) const;
		virtual ~Animal( void );
};

#endif