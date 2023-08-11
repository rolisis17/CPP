#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;

class TargetGenerator
{
	private:
		TargetGenerator( const TargetGenerator& other );
		TargetGenerator& operator=( const TargetGenerator& other );
		std::map<std::string, ATarget*> array;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType( ATarget* target );
		void forgetTargetType( std::string const &target );
		ATarget *createTarget( std::string const &target);
};

#endif