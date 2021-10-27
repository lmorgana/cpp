
#include "Fixed.hpp"

int	main(void)
{
//	Fixed a(5.6f);
//	Fixed b(100.7f);
//	Fixed c(5.6f);
//
//
//	std::cout << (a == b) << std::endl;
//	std::cout << (a == c) << std::endl;
//
//	std::cout << (a > b) << std::endl;
//	std::cout << (c < b) << std::endl;
//
//	std::cout << (a >= b) << std::endl;
//	std::cout << (a <= c) << std::endl;

//	Fixed	a(5.7f);
//	Fixed	b(2.3f);
//
//	std::cout << "a=" << a.toFloat() << std::endl;
//	std::cout << "b=" << b.toFloat() << std::endl;
//
//	std::cout << "a - b = " << a - b << std::endl;
//	std::cout << "a + b = " << a + b << std::endl;
//	std::cout << "a * b = " << a * b << std::endl;
//	std::cout << "a / b = " << a / b << std::endl;



	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}