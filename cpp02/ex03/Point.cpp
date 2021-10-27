
#include "Point.hpp"

Point::Point()
{

}

Point::~Point()
{

}

Point::Point(const int x, const int y) : x(x), y(y)
{

}

Point::Point(const float x, const float y) : x(x), y(y)
{

}

Point::Point(const Point& other)
{
	const_cast<Fixed&>(x) = other.x;
	const_cast<Fixed&>(y) = other.y;
}

Point&	Point::operator=(const Point& other)
{
	const_cast<Fixed&>(x) = other.x;
	const_cast<Fixed&>(y) = other.y;
	return (*this);
}

Fixed	Point::get_x(void) const
{
	return (x);
}

float	Point::get_x_fl(void) const
{
	return (x.toFloat());
}

Fixed	Point::get_y(void) const
{
	return (y);
}

float	Point::get_y_fl(void) const
{
	return (y.toFloat());
}

