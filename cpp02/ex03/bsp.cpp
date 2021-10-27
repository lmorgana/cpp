
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	p1;
	float	p2;
	float	p3;

	p1 = ((a.get_x_fl() - point.get_x_fl())*(b.get_y_fl() - a.get_y_fl()) -
			(b.get_x_fl() - a.get_x_fl())*(a.get_y_fl() - point.get_y_fl()));
	p2 = ((b.get_x_fl() - point.get_x_fl())*(c.get_y_fl() - b.get_y_fl()) -
			(c.get_x_fl() - b.get_x_fl())*(b.get_y_fl() - point.get_y_fl()));
	p3 =  ((c.get_x_fl() - point.get_x_fl())*(a.get_y_fl() - c.get_y_fl()) -
			(a.get_x_fl() - c.get_x_fl())*(c.get_y_fl() - point.get_y_fl()));
	if ((p1 > 0 && p2 > 0 && p3 > 0) || (p1 < 0 && p2 < 0 && p3 < 0))
		return (true);
	return (false);
}

