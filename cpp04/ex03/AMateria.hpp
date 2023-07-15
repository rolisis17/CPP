#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Character.hpp"

class ICharacter;

class AMateria
{
	private:
		static int	groundItemsIndex;
		static AMateria	*groundItems[100];
	
	protected:
		std::string type;

	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria( AMateria& other);
		AMateria&	operator=( AMateria& other );
		std::string const & getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
		int					getgroundItemsIndex( void );
		void				dropItem( AMateria* dropped );
		void				deleteGroundItems( void );
		virtual	~AMateria( void );
};
#endif