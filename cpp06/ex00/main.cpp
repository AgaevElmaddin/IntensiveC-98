#include <iostream>
#include <sstream>
#include "ClassConvert.hpp"
#include <cmath>
int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: invalid number of parameters!" << std::endl;
		return (0);
	}
	ClassConvert convert(argv[1]);
	convert.printTypes();

	return 0;
}