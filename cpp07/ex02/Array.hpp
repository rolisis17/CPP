#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array();
		Array( unsigned int n );
		Array( const Array& other );
		Array& operator=( const Array& other );
		~Array();
};

#include "Array.tpp"

#endif