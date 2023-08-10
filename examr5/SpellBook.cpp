#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{}

void SpellBook::learnSpell( ASpell *spell )
{
	if (spell)
		array.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell( std::string const &spells_name )
{
	std::map<std::string, ASpell *>::iterator it = array.find(spells_name);
	if (it != array.end())
		delete it->second;
	array.erase(spells_name);
}

ASpell *SpellBook::createSpell( std::string const &spells_name )
{
	std::map<std::string, ASpell *>::iterator it = array.find(spells_name);
	if (it != array.end())
		return array[spells_name];
	return NULL;
}