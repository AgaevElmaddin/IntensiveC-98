#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const Point& copy) : x(copy.x), y(copy.y) {}

Point::Point(const float x1, const float y1): x(x1), y(y1) {}

Point::~Point() {}

Fixed const		Point::getValueX() const
{
	return this->x;
}

Fixed const		Point::getValueY() const
{
	return this->y;
}

Point& Point::operator=(const Point& copy)
{
	(void)copy;
	return *this;
}
