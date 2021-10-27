#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int>	m_arr;
	unsigned int		m_size;
public:
	Span();
	Span(unsigned int n);
	Span& operator=(const Span& other);
	~Span();
	void addNumber(int n);
	int	longestSpan();
	int shortestSpan();

	template<class iterator>
	void addNumber(iterator start, iterator end)
	{
		int numb = std::distance(start, end);
		if (numb > 0 && m_arr.size() + numb > m_size)
			throw	OutOfRangeException();
		m_arr.insert(m_arr.end(), start, end);
	}
	class 	OutOfRangeException : public std::exception
	{
		const char * what() const throw()
		{
			return ("Span out of range");
		}
	};
	class	NoItemToSpanException : public std::exception
	{
		const char * what() const throw()
		{
			return ("No item to span");
		}
	};
};

#endif
