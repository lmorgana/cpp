
#include "span.hpp"

int main(void)
{
	try
	{
		Span sp(4);

		sp.addNumber(10);
		sp.addNumber(0);
		sp.addNumber(0);
		sp.addNumber(1040);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


//void	show_elem(int elem)
//{
//	std::cout << elem << std::endl;
//}
//
//int main()
//{
//	std::vector<int> vec(10);
//	Span sp = Span(10);
//
//	for (int i = 0; i < 10; i++)
//		vec[i] = i;
//
//	vec[0] = 2;
//
//	std::for_each(vec.begin(), vec.end(), &show_elem);
//
//	try
//	{
//		sp.addNumber(vec.begin(), vec.end());
//		std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
//		std::cout << "Longest: " << sp.longestSpan() << std::endl;
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//}
