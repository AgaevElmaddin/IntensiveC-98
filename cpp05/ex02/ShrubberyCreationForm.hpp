#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(const std::string& target);
			ShrubberyCreationForm(const ShrubberyCreationForm& copy);
			~ShrubberyCreationForm();

			ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);

			virtual void	execute(Bureaucrat const & executor) const;
};

#endif
