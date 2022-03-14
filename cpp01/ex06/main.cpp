#include "Karen.hpp"

int main(int argc, char **argv)
{
	int i = 0;
	Karen message;
	std::string comment[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cout << "Error: invalid number of arguments!" << std::endl;
		return (0);
	}
	for (; i < 4; i++)
		if (comment[i] == argv[1])
			break;
	switch (i)
	{
		case 0:
				std::cout << '[' << comment[0] << ']' << std::endl;
				message.complain(comment[0]);
				i++;
		case 1:
				std::cout << '[' << comment[1] << ']' << std::endl;
				message.complain(comment[1]);
				i++;
		case 2:
				std::cout << '[' << comment[2] << ']' << std::endl;
				message.complain(comment[2]);
				i++;
		case 3:
				std::cout << '[' << comment[3] << ']' << std::endl;
				message.complain(comment[3]);
				break;
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	return (0);
}
