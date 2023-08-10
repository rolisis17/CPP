#include "Warlock.hpp"

Warlock::Warlock( std::string const name, std::string const title )
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

std::string const &Warlock::getName( void ) const
{
	return this->name;
}

std::string const &Warlock::getTitle( void ) const
{
	return this->title;
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::setTitle( std::string const &new_title )
{
	this->title = new_title;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

void Warlock::learnSpell( ASpell *spell )
{
	book.learnSpell(spell);
}

void Warlock::forgetSpell( std::string spells_name )
{
	book.forgetSpell(spells_name);
}

void Warlock::launchSpell( std::string spells_name, ATarget const &target )
{
	ASpell *spell = book.createSpell(spells_name);
	if (spell)
		spell->launch(target);
}