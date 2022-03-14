#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	srand(time(NULL));
	Bureaucrat Tim("Tim", 1);
	Bureaucrat Elena("Elena", 10);
	Bureaucrat Kane("Kane", 136);

	try
	{
		PresidentialPardonForm a("28A");
		a.execute(Tim);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const char* e)
	{
		std::cout << e << '\n';
	}
	std::cout << "//////////////////////////////" << std::endl;
	std::cout << "//////////////////////////////" << std::endl;

	try
	{
		PresidentialPardonForm b("28B");
		b.beSigned(Tim);
		b.execute(Tim);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const char* e)
	{
		std::cout << e << '\n';
	}
	std::cout << "//////////////////////////////" << std::endl;
	std::cout << "//////////////////////////////" << std::endl;

	try
	{
		RobotomyRequestForm c("28C");
		c.beSigned(Tim);
		c.execute(Elena);
		std::cout << "//////////////////////////////" << std::endl;
		c.execute(Elena);
		std::cout << "//////////////////////////////" << std::endl;
		c.execute(Elena);
		std::cout << "//////////////////////////////" << std::endl;
		c.execute(Elena);
		std::cout << "//////////////////////////////" << std::endl;
		c.execute(Elena);
		std::cout << "//////////////////////////////" << std::endl;
		c.execute(Elena);
		std::cout << "//////////////////////////////" << std::endl;
		c.execute(Elena);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const char* e)
	{
		std::cout << e << '\n';
	}
	std::cout << "//////////////////////////////" << std::endl;
	std::cout << "//////////////////////////////" << std::endl;

	try
	{
		ShrubberyCreationForm d("28D");
		d.beSigned(Tim);
		d.execute(Elena);
		d.execute(Kane);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const char* e)
	{
		std::cout << e << '\n';
	}

	return (0);
}
