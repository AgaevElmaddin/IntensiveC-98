#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	public:
			PhoneBook();
			~PhoneBook();

			void	AddContact();
			void	SearchContact();

	private:
			Contact contacts[8];
};

#endif