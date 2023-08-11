#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){
}
TargetGenerator::~TargetGenerator(){
	std::map<std::string, ATarget*>::iterator it_begin = array.begin();
	std::map<std::string, ATarget*>::iterator it_end = array.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	array.clear();
}

void TargetGenerator::learnTargetType( ATarget* target ) {
	if (target)
		array.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType( std::string const &Target ) {
	std::map<std::string, ATarget*>::iterator it = array.find(Target);
	if (it != array.end())
		delete it->second;
	array.erase(Target);
}

ATarget *TargetGenerator::createTarget( std::string const &target ) {
	std::map<std::string, ATarget*>::iterator it = array.find(target);
	if (it != array.end())
		return it->second;
/* 	ASpell * tmp = array[spell];
	if (tmp)
		tmp->launch(target); */
	return NULL;
}
