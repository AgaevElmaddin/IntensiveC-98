#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::setFirstName(std::string str)
{
	FirstName = str;
}

void	Contact::setLastName(std::string str)
{
	LastName = str;
}

void	Contact::setNickName(std::string str)
{
	NickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	PhoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	DarkestSecret = str;
}

std::string		Contact::getFirstName()
{
	return (FirstName);
}

std::string		Contact::getLastName()
{
	return (LastName);
}

std::string		Contact::getNickName()
{
	return (NickName);
}

std::string		Contact::getPhoneNumber()
{
	return(PhoneNumber);
}

std::string		Contact::getDarkestSecret()
{
	return (DarkestSecret);
}
