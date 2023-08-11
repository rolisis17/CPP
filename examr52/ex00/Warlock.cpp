#include "Warlock.hpp"

Warlock::Warlock( std::string name, std::string title) : name(name), title(title){
	std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock(){
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName( void ) const{ return name; }
const std::string &Warlock::getTitle( void ) const{ return title; }
void Warlock::setTitle( const std::string& newTitle ){ this->title = newTitle; }
void Warlock::introduce( void ) const {
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
