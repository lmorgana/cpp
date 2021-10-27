
#include "Fixed.hpp"
#include <iostream>

uintptr_t serialize(Fixed* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Fixed*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Fixed *>(raw));
}

int	main(void)
{
	Fixed		*ptr1;
	Fixed		*ptr2;
	uintptr_t	raw;

	ptr1 = new Fixed(1);

	raw = serialize(ptr1);
	ptr2 = deserialize(raw);
	std::cout << "Raw: " << raw << std::endl;
	std::cout << "Ptr1: " << *ptr1 << std::endl;
	std::cout << "Ptr2: " << *ptr2 << std::endl;

	delete ptr1;
	return (0);
}