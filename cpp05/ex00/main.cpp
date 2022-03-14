#include <iostream>
#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat FromSpain("Donatello", 55);
	std::cout << FromSpain << std::endl;
	FromSpain.incrementGrade();
	std::cout << FromSpain << std::endl;
	FromSpain.decrementGrade();
	std::cout << FromSpain << std::endl;

	try
	{
		Bureaucrat FromEngland("Wayne", 0);
		std::cout << FromEngland << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat FromFrance("Veratti", 151);
		std::cout << FromFrance << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat FromItaly("Franchesco", 1);
		std ::cout << FromItaly << std::endl;
		FromItaly.incrementGrade();
		std::cout << FromItaly << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat FromGermany("Muller", 150);
		std::cout << FromGermany << std::endl;
		FromGermany.decrementGrade();
		std::cout << FromGermany << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}