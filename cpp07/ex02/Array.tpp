#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr_lenght(1)
{
	arr = new T[arr_lenght];
}

template <typename T>
Array<T>::Array( unsigned int n ) : arr_lenght(n)
{
	arr = new T[arr_lenght];
}

template <typename T>
Array<T>::Array( const Array<T>& other ) : arr_lenght(other.arr_lenght)
{
	arr = new T[arr_lenght];
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=( const Array<T>& other )
{
	if (this != &other)
	{
		delete[] arr;
		arr_lenght = other.arr_lenght;
		arr = new T[arr_lenght];
		for (int i = 0; i < arr_lenght; i++)
			arr[i] = other.arr[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

template <typename T>
T& Array<T>::operator[](int index) const
{
	if (index >= 0 && index < arr_lenght)
		return arr[index];
	else
		throw std::out_of_range("Index out of bounds");
}

template <typename T>
int Array<T>::size( void ) const
{
	return arr_lenght;
}

#endif