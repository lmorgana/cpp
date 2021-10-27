#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
	T*				arr;
	unsigned	int	len;

public:
	Array()
	{
		arr = (T*) nullptr;
		len = 0;
	};
	Array(unsigned int n)
	{
		arr = new T[n]();
		len = n;
	}
	~Array()
	{
		delete [] arr;
	}
	Array(Array const &other)
	{
		len = other.len;
		arr = new T[other.len]();
		for (unsigned int i = 0; i < other.len; i++)
			arr[i] = other.arr[i];
	}
	Array& operator=(Array const &other)
	{
		delete [] arr;
		len = other.len;
		arr = new T[other.len]();
		for (unsigned int i = 0; i < other.len; i++)
			arr[i] = other.arr[i];
		return (*this);
	}
	T& operator[](const unsigned int index)
	{
		if (index < 0 || index >= len)
			throw OutOfLimitsException();
		return (arr[index]);
	}
	unsigned int size(void)
	{
		return (len);
	}
	class	OutOfLimitsException : public std::exception
	{
	public:
		const char * what() const throw()
		{
			return ("Out of limits array");
		}
	};
};

#endif
