
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(7, 12);
	Point	b(1, 1);
	Point	c(2, 2);
	Point	point(7, 3);

	std::cout << "result is " << bsp(a, b, c, point) << std::endl;

	return (0);
}