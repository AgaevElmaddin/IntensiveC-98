#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::AddContact()
{
	static	int	i = 0;
	std::string	message;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, message);
	contacts[i].setFirstName(message);

	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, message);
	contacts[i].setLastName(message);

	std::cout << "Enter nickname number" << std::endl;
	std::getline(std::cin, message);
	contacts[i].setNickName(message);

	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, message);
	contacts[i].setPhoneNumber(message);

	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, message);
	contacts[i].setDarkestSecret(message);

	if (i < 7)
		i++;
	else
		i = 0;
}

void	PhoneBook::SearchContact()
{
	int	i;
	int	j;
	int	NumberContacts;

	j = 0;
	NumberContacts = 0;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	while (j < 8)
	{
		std::string str = contacts[j].getFirstName();
		if (str.empty())
			break ;
		std::cout << "|" << std::setw(10) << j + 1;

		std::string FirstNameCut = contacts[j].getFirstName();
		if (FirstNameCut.length() > 10)
			FirstNameCut = FirstNameCut.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << FirstNameCut;

		std::string LastNameCut = contacts[j].getLastName();
		if (LastNameCut.length() > 10)
			LastNameCut = LastNameCut.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << LastNameCut;

		std::string NickNameCut = contacts[j].getNickName();
		if (NickNameCut.length() > 10)
			NickNameCut = NickNameCut.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << NickNameCut;
		std::cout << "|" << std::endl;
		NumberContacts++;
		j++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl << std::endl;
	std::cout << "Enter contact index: ";
	if (!(std::cin >> i) || i < 1 || i > NumberContacts)
	{
		std::cin.clear();
		std::cout << "Invalid index" << std::endl;
	}
	else
	{
		i--;
		std::cout << "first name: " << contacts[i].getFirstName() << std::endl;
		std::cout << "last name: " << contacts[i].getLastName() << std::endl;
		std::cout << "nickname: " << contacts[i].getNickName() << std::endl;
		std::cout << "phone number: " << contacts[i].getPhoneNumber() << std::endl;
		std::cout << "darkest secret: " << contacts[i].getDarkestSecret() << std::endl;
		std::cout << std::endl;
	}
	std::cin.ignore();
}
