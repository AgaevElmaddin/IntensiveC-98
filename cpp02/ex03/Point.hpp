#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
			Point();
			Point(const Point& copy);
			Point(const float x1, const float y1);
			~Point();

			Fixed const		getValueX() const;
			Fixed const		getValueY() const;

			Point& operator=(const Point& copy);

	private:
			Fixed const x;
			Fixed const y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
