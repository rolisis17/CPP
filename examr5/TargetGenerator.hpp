#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator
{
	private:
		TargetGenerator( TargetGenerator const &other );
		TargetGenerator& operator=( TargetGenerator const &other );
		std::map<std::string , ATarget *> array;
	
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType( ATarget *target );
		void forgetTargetType( std::string const &targets_name );
		ATarget *createTarget( std::string const &targets_name );
};

#endif