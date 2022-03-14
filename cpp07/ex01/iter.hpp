#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, int lenArray, void (*func)(const T &p))
{
	for (int i = 0; i < lenArray; i++)
		func(array[i]);
}

#endif
