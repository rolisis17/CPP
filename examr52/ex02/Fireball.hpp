#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();

		Fireball *clone( void ) const;
};

#endif