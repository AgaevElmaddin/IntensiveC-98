#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& copy)
{
	(void)copy;
}

Intern::~Intern()
{

}

Intern& Intern::operator=(const Intern& copy)
{
	(void)copy;
	return (*this);
}

Form	*Intern::makeForm(std::string FormName, std::string FormTarget)
{
	Form* res;
	res = NULL;
	std::string threeForms[3] = {"ShrubberyCreationForm",
								 "RobotomyRequestForm",
								 "PresidentialPardonForm"};
	Form* (Intern::*functions[3])(const std::string&)
		= {&Intern::newShrubberyCreationForm,
		   &Intern::newRobotomyRequestForm,
		   &Intern::newPresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (threeForms[i] == FormName)
		{
			res = (this->*functions[i])(FormTarget);
			std::cout << "Intern creates " << res->getName() << std::endl;
			return (res);
		}
	}
	std::cout << "Intern has an issue in order to create an appropriate form" << std::endl;
	return (res);
}

Form	*Intern::newShrubberyCreationForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::newRobotomyRequestForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::newPresidentialPardonForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}
