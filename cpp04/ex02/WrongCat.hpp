#ifndef	WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( std::string type );
		WrongCat( WrongCat& other );
		WrongCat&	operator=( WrongCat& other );
		void	makeSound() const;
		~WrongCat( void );
};

#endif