#include "Warlock.hpp"

Warlock::Warlock( std::string name, std::string title) : name(name), title(title){
	std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
	std::cout << name << ": My job here is done!" << std::endl;
	std::map<std::string, ASpell*>::iterator it_begin = array.begin();
	std::map<std::string, ASpell*>::iterator it_end = array.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	array.clear();
}

const std::string &Warlock::getName( void ) const{ return name; }
const std::string &Warlock::getTitle( void ) const{ return title; }
void Warlock::setTitle( const std::string& newTitle ){ this->title = newTitle; }
void Warlock::introduce( void ) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell( ASpell* spell ) {
	if (spell)
		array.insert(std::pair<std::string, ASpell*>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell( std::string spell ) {
	std::map<std::string, ASpell*>::iterator it = array.find(spell);
	if (it != array.end())
		delete it->second;
	array.erase(spell);
}

void Warlock::launchSpell( std::string spell, const ATarget& target ) {
	std::map<std::string, ASpell*>::iterator it = array.find(spell);
	if (it != array.end())
		it->second->launch(target);
/* 	ASpell * tmp = array[spell];
	if (tmp)
		tmp->launch(target); */
}
