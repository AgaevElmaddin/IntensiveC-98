#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(const std::string& target);
			RobotomyRequestForm(const RobotomyRequestForm& copy);
			~RobotomyRequestForm();

			RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);

			virtual void	execute(Bureaucrat const & executor) const;
};

#endif
