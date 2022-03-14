#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point new_a;

	bool res = false;

	Point new_b(b.getValueX().toFloat() - a.getValueX().toFloat(),
	b.getValueY().toFloat() - a.getValueY().toFloat());

	Point new_c(c.getValueX().toFloat() - a.getValueX().toFloat(),
	c.getValueY().toFloat() - a.getValueY().toFloat());

	Point new_point(point.getValueX().toFloat() - a.getValueX().toFloat(),
	point.getValueY().toFloat() - a.getValueY().toFloat());

	float m = (point.getValueX().toFloat() * b.getValueY().toFloat() -
	b.getValueX().toFloat() * point.getValueY().toFloat()) /
	(c.getValueX().toFloat() * b.getValueY().toFloat() -
	b.getValueX().toFloat() * c.getValueY().toFloat());
	float l = -1;

	if ( m > 0 && m < 1)
	{
		l = (new_point.getValueX().toFloat() - m * new_c.getValueX().toFloat()) /
		new_b.getValueX().toFloat();
		if (l > 0 && (m + l) < 1)
			res = true;
	}
	return res;
}