#include "ATarget.hpp"

ATarget::ATarget( std::string Type) : type(Type){
}
ATarget::~ATarget(){
}

const std::string &ATarget::getType( void ) const{ return type; }
void ATarget::getHitBySpell( const ASpell& spell ) const {
	std::cout << type << " has been " << spell.getEffects() << std::endl;
}
