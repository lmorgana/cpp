
#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> ms;

	ms.push(5);
	ms.push(17);

	std::cout << ms.top() << std::endl;

	ms.pop();

	std::cout << ms.size() << std::endl;
	ms.push(3);
	ms.push(5);
	ms.push(737);

	ms.push(0);
	MutantStack<int>::iterator it = ms.begin();
	MutantStack<int>::iterator ite = ms.end();

	++it;
	--it;
	std::cout << "While" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(ms);
	return 0;
}
