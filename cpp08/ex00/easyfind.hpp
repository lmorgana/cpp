#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

class	ItemNotFoundException : public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Item not found");
	}
};

template <class T>
typename T::iterator easyfind(T *itCont, int item)
{
	typename T::iterator iter = std::find(itCont->begin(), itCont->end(), item);

	if (iter == itCont->end())
		throw ItemNotFoundException();
	return (iter);
}

#endif
