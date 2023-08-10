#ifndef ATarget_HPP
#define ATarget_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string Type;
	
	public:
		ATarget();
		ATarget( std::string const type );
		ATarget( ATarget const &other );
		ATarget& operator=( ATarget const &other );
		std::string const &getType( void ) const;
		void	getHitBySpell( ASpell const &spell ) const;
		virtual ATarget *clone( void ) const = 0;
		virtual ~ATarget();
};

#endif