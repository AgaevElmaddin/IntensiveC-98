#include "Fixed.hpp"
#include "Point.hpp"

int		main(void)
{
	Point const a(0,0);
	Point const b(6,0);
	Point const c(0,3);
	Point const point(3,1);

	std::cout << bsp(a, b, c, point) << std::endl;

	return 0;
}
