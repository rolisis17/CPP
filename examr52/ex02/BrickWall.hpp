#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();

		BrickWall *clone( void ) const;
};

#endif