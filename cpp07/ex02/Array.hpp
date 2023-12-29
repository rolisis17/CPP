#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T *arr;
		int arr_lenght;

	public:
		Array();
		Array( unsigned int n );
		Array( const Array<T>& other );
		Array<T>& operator=( const Array<T>& other );
		~Array();
		T& operator[](int index) const;
		int	size( void ) const;
};

#include "Array.tpp"

#endif