#include "PhoneBook.hpp"

int	main(void)
{
	std::string	message;
	PhoneBook	TelephoneBook;

	while (1)
	{
		std::cout << "Enter one of the available commands: ADD, SEARCH, EXIT: " << std::endl;
		std::getline(std::cin, message);
		if (message == "ADD")
			TelephoneBook.AddContact();
		else if (message == "SEARCH")
			TelephoneBook.SearchContact();
		else if (message == "EXIT")
			break ;
	}
	return (0);
}
