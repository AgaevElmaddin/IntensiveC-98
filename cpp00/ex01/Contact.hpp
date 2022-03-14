#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	public:
			Contact();
			~Contact();

			void	setFirstName(std::string str);
			void	setLastName(std::string str);
			void	setNickName(std::string str);
			void	setPhoneNumber(std::string str);
			void	setDarkestSecret(std::string str);

			std::string	getFirstName();
			std::string	getLastName();
			std::string	getNickName();
			std::string	getPhoneNumber();
			std::string	getDarkestSecret();

	private:
			std::string	FirstName;
			std::string	LastName;
			std::string	NickName;
			std::string	PhoneNumber;
			std::string	DarkestSecret;
};

# endif