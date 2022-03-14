#include "Span.hpp"

// clang++ -std=c++98 -Wall -Wextra -Werror

int		main()
{
	Span sp = Span(5);

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}

	std::cout << "////////////////////////////////////////////////////" << std::endl;

	sp.addNumber(6);

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}

	std::cout << "////////////////////////////////////////////////////" << std::endl;

	sp.addNumber(3);

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << e.what() <<  std::endl;
	}

	std::cout << "////////////////////////////////////////////////////" << std::endl;

	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp1 = Span(5);
    std::vector<int> vect;
    vect.push_back(25);
	vect.push_back(5);
	vect.push_back(12);
	vect.push_back(90);
	vect.push_back(-2);
	std::cout << "////////////////////////////////" << std::endl;
	std::cout << sp1;
	std::cout << "////////////////////////////////" << std::endl;
	sp1.rangeOfIterators(vect.begin(), vect.end());
	std::cout << sp1;
	std::cout << "////////////////////////////////" << std::endl;
	sp1.rangeOfIterators(vect.begin(), vect.end());
	std::cout << "////////////////////////////////" << std::endl;
	std::cout << sp1;
	std::cout << "////////////////////////////////" << std::endl;

	Span sp2(20000);
	sp2.addNumber(1234);
	sp2.fillVect();
	std::cout << sp2 << std::endl;
	return 0;
}
