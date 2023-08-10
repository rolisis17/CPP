#ifndef ASpell_HPP
#define ASpell_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	
	public:
		ASpell();
		ASpell( std::string const name, std::string const effects );
		ASpell( ASpell const &other );
		ASpell& operator=( ASpell const &other );
		std::string const &getName( void ) const;
		std::string const &getEffects( void ) const;
		void	launch( ATarget const &target );
		virtual ASpell *clone( void ) const = 0;
		virtual ~ASpell();
};

#endif