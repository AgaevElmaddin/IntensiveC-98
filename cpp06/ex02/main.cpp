 #include "Base.hpp"

int		main()
{
	std::srand(time(NULL));
	Base *createType;

	createType = generate();
	identify(createType);
	delete createType;
	std::cout << "///////////////////////////////////" << std::endl;
	createType = generate();
	identify(*createType);
	delete createType;;

	return (0);
}