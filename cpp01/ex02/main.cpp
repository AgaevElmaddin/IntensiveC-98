#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "1) The address of the str is " << &str << std::endl;

	std::cout << "2) The address of the str by using stringPTR is ";
	std::cout << &(*stringPTR) << std::endl;

	std::cout << "3) The address of the str by using stringREF is ";
	std::cout << &stringREF << std::endl;

	std::cout << "4) The value of the str by using the pointer is ";
	std::cout << *stringPTR << std::endl;

	std::cout << "5) The value of the str by using the reference is ";
	std::cout << stringREF << std::endl;

	return (0);
}