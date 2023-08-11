#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;

	public:
		ASpell();
		ASpell( const ASpell& other );
		ASpell& operator=( const ASpell& other );
		ASpell( std::string Name, std::string Effects);
		virtual ~ASpell();

		const std::string &getName( void ) const;
		const std::string &getEffects( void ) const;

		virtual ASpell *clone( void ) const = 0;
		void launch( const ATarget& target );
};

#endif