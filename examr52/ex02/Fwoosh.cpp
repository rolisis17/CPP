#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "Fwooshed"){
}
Fwoosh::~Fwoosh(){
}

Fwoosh *Fwoosh::clone( void ) const {
	return new Fwoosh();
}

