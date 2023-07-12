#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Character.hpp"

Character;

class AMateria
{
	protected:
		std::string type;


	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria( AMateria& other);
		AMateria&	operator=( AMateria& other );
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		~AMateria( void );
};
#endif