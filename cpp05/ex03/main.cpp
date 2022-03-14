#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()
{
	Intern Tom;
	Form *choice;

	choice = Tom.makeForm("Form which is differ from ours", "Paul");
	choice = Tom.makeForm("ShrubberyCreationForm", "Louis");
	choice = Tom.makeForm("RobotomyRequestForm", "Martin");
	choice = Tom.makeForm("PresidentialPardonForm", "Alex");

	return (0);
}
