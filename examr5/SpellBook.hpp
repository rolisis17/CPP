#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <map>

class Aspell;

class SpellBook
{
	private:
		SpellBook( SpellBook const &other );
		SpellBook& operator=( SpellBook const &other );
		std::map<std::string , ASpell *> array;
	
	public:
		SpellBook();
		~SpellBook();

		void learnSpell( ASpell *spell );
		void forgetSpell( std::string const &spells_name );
		ASpell *createSpell( std::string const &spells_name );
};

#endif