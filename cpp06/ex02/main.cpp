
#include "header.hpp"

Base* generate(void)
{
	int rand;

	srand(std::time(nullptr) * std::rand() * std::clock());
	rand = std::rand() % 3;
	switch (rand)
	{
		case 1:
			return (new A);
		case 2:
			return (new B);
		default:
			return (new C);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*> (p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*> (p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	if (dynamic_cast<Base *> (&p) == nullptr)
		return ;
	try
	{
		A a = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B b = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C c = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main(void)
{
	Base *ptr = generate();
	Base &ref(*generate());

	std::cout << "ref type: ";
	identify(ref);
	std::cout << "ptr type: ";
	identify(ptr);

	delete ptr;
	delete &ref;

	//for nullptr
//	Base *ptr = nullptr;
//	Base &ref2 = *ptr;
//
//	identify(ref2);


	return (0);
}
