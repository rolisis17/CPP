#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>

class Warlock
{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock( const Warlock& other );
		Warlock& operator=( const Warlock& other );

	public:
		Warlock( std::string name, std::string title);
		~Warlock();

		const std::string &getName( void ) const;
		const std::string &getTitle( void ) const;
		void setTitle( const std::string& newTitle );
		void introduce( void ) const;
};

#endif