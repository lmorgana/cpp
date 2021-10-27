#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"


class	Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	Point();
	~Point();
	Point(const Point& other);
	Point(const int x, const int y);
	Point(const float x, const float y);
	Point&	operator=(const Point& other);
	Fixed	get_x(void) const;
	float	get_x_fl(void) const;
	Fixed	get_y(void) const;
	float	get_y_fl(void) const;

};

#endif
