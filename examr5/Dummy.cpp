#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

ATarget *Dummy::clone( void ) const
{
	return (new Dummy());
}

Dummy::~Dummy()
{}