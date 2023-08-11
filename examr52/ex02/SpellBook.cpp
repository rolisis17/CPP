#include "SpellBook.hpp"

SpellBook::SpellBook(){
}
SpellBook::~SpellBook(){
	std::map<std::string, ASpell*>::iterator it_begin = array.begin();
	std::map<std::string, ASpell*>::iterator it_end = array.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	array.clear();
}

void SpellBook::learnSpell( ASpell* spell ) {
	if (spell)
		array.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell( std::string const &spell ) {
	std::map<std::string, ASpell*>::iterator it = array.find(spell);
	if (it != array.end())
		delete it->second;
	array.erase(spell);
}

ASpell *SpellBook::createSpell( std::string const &spell ) {
	std::map<std::string, ASpell*>::iterator it = array.find(spell);
	if (it != array.end())
		return it->second;
/* 	ASpell * tmp = array[spell];
	if (tmp)
		tmp->launch(target); */
	return NULL;
}
