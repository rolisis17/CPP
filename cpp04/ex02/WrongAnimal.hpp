#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
        std::string type;

	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal& other );
		WrongAnimal&	operator=( WrongAnimal& other );
		void	makeSound( void ) const;
		std::string	getType( void ) const;
		virtual ~WrongAnimal( void );
};

#endif