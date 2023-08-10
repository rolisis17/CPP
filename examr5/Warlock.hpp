#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <map>

class Aspell;
class SpellBook;

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock( Warlock const &other );
		Warlock& operator=( Warlock const &other );

		SpellBook book;
	
	public:
		Warlock( std::string const name, std::string const title );
		std::string const &getName( void ) const;
		std::string const &getTitle( void ) const;
		void	setTitle( std::string const &new_title );
		void	introduce() const;
		~Warlock();

		void learnSpell( ASpell *spell );
		void forgetSpell( std::string spells_name );
		void launchSpell( std::string spells_name, ATarget const &target );
};

#endif