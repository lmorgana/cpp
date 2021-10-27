
#include "span.hpp"

Span::Span()
{
	m_arr = std::vector<int>();
	m_size = 0;
}

Span::Span(unsigned int n)
{
	m_arr = std::vector<int>();
	m_size = n;
}

Span& Span::operator=(const Span &other)
{
	m_arr = other.m_arr;
	m_size = other.m_size;
	return (*this);
}

Span::~Span()
{

}

void	Span::addNumber(int n)
{
	if (m_arr.size() == m_size)
		throw	OutOfRangeException();
	m_arr.push_back(n);
}

int	Span::longestSpan()
{
	if (m_arr.size() <= 1)
		throw	NoItemToSpanException();
	return (*std::max_element(m_arr.begin(), m_arr.end()) -
	*std::min_element(m_arr.begin(), m_arr.end()));
}

int Span::shortestSpan()
{
	std::vector<int>::iterator i;
	std::vector<int>::iterator j;
	int	sp = 2147483647;

	if (m_arr.size() <= 1)
		throw	NoItemToSpanException();
	for (i = m_arr.begin(); i != m_arr.end(); ++i)
	{
		for (j = i; j != m_arr.end(); ++j)
		{
			if (sp > std::abs(*i - *j) && std::abs(*i - *j) != 0)
				sp = std::abs(*i - *j);
			if (sp == 1)
				return (1);
		}
	}
	return (sp);
}
