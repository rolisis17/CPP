#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class SpellBook
{
	private:
		SpellBook( const SpellBook& other );
		SpellBook& operator=( const SpellBook& other );
		std::map<std::string, ASpell*> array;

	public:
		SpellBook();
		~SpellBook();

		void learnSpell( ASpell* spell );
		void forgetSpell( std::string const &spell );
		ASpell *createSpell( std::string const &spell);
};

#endif