#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <map>

class ASpell;

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock( const Warlock& other );
		Warlock& operator=( const Warlock& other );
		std::map<std::string, ASpell*> array;

	public:
		Warlock( std::string name, std::string title);
		~Warlock();

		const std::string &getName( void ) const;
		const std::string &getTitle( void ) const;
		void setTitle( const std::string& newTitle );
		void introduce( void ) const;

		void learnSpell( ASpell* spell );
		void forgetSpell( std::string spell );
		void launchSpell( std::string spell, const ATarget& target );
};

#endif