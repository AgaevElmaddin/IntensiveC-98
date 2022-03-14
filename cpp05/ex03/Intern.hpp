#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	public:
			Intern();
			Intern(const Intern& copy);
			~Intern();

			Intern& operator=(const Intern& copy);

			Form	*makeForm(std::string FormName, std::string FormTarget);

			Form	*newShrubberyCreationForm(const std::string& target);
			Form	*newRobotomyRequestForm(const std::string& target);
			Form	*newPresidentialPardonForm(const std::string& target);
};

#endif
