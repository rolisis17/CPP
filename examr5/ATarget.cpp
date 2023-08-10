#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget( std::string const type )
{
	this->Type = type;
}

std::string const &ATarget::getType( void ) const
{
	return this->Type;
}

ATarget::ATarget( ATarget const &other )
{
	*this = other;
}

ATarget& ATarget::operator=( ATarget const &other )
{
	if (this != &other)
	{
		this->Type = other.Type;
	}
	return (*this);
}

void	ATarget::getHitBySpell( ASpell const &spell ) const
{
	std::cout << this->Type << " has been " << spell.getEffects() << "!" << std::endl;
}

ATarget::~ATarget()
{}