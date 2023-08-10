#ifndef Dummy_HPP
#define Dummy_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();
		ATarget *clone( void ) const;
};

#endif