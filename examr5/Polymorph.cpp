#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "urned into a critter") {}

ASpell *Polymorph::clone( void ) const
{
	return (new Polymorph());
}

Polymorph::~Polymorph()
{}