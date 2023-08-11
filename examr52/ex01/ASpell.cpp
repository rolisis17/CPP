#include "ASpell.hpp"

ASpell::ASpell( std::string name, std::string Effects) : name(name), effects(Effects){
}
ASpell::~ASpell(){
}

const std::string &ASpell::getName( void ) const{ return name; }
const std::string &ASpell::getEffects( void ) const{ return effects; }
void ASpell::launch( const ATarget& target ) {
	target.getHitBySpell(*this);
}
