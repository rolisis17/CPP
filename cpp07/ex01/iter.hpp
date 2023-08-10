#ifndef ITER_HPP
#define ITER_HPP

template <typename Type>
void	iter(Type* array, int length, void(*fun)(Type&))
{
	for (int i = 0; i < length; i++)
		fun(array[i]);
}

#endif