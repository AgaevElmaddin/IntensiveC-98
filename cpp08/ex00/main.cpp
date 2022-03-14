#include "easyfind.hpp"

// clang++ -std=c++98 -Wall -Wextra -Werror

int		main()
{
	std::vector<int> myVector;
	std::vector<int>::iterator it;

	for (int i = 0; i <= 20; i += 4)
		myVector.push_back(i);

	try
	{
		std::cout << "find 16: ";
		it = easyfind(myVector, 16);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "find 3: ";
		it = easyfind(myVector, 3);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
