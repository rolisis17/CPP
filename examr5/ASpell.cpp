#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell( std::string const name, std::string const effects )
{
	this->name = name;
	this->effects = effects;
}

std::string const &ASpell::getName( void ) const
{
	return this->name;
}

std::string const &ASpell::getEffects( void ) const
{
	return this->effects;
}

ASpell::ASpell( ASpell const &other )
{
	*this = other;
}

ASpell& ASpell::operator=( ASpell const &other )
{
	if (this != &other)
	{
		this->name = other.name;
		this->effects = other.effects;
	}
	return (*this);
}

void	ASpell::launch( ATarget const &target )
{
	target.getHitBySpell(*this);
}

ASpell::~ASpell()
{}