#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename fun>
void iter(T *arr, size_t len, fun f)
{
	for (std::size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
