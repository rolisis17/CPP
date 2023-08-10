#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{}

void TargetGenerator::learnTargetType( ATarget *target )
{
	if (target)
		array.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType( std::string const &targets_name )
{
	std::map<std::string, ATarget *>::iterator it = array.find(targets_name);
	if (it != array.end())
		delete it->second;
	array.erase(targets_name);
}

ATarget *TargetGenerator::createTarget( const std::string &targets_name )
{
	std::map<std::string, ATarget *>::iterator it = array.find(targets_name);
	if (it != array.end())
		return array[targets_name];
	return NULL;
}