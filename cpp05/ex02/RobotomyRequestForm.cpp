#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
	Form("RobotomyRequestForm", 72, 45, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
{
	(void)copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	(void)copy;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIndicatesSigned() == false)
		throw "The form is not signed";
	else if (executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	std::cout << "drrrrrrrrrrrrrrrrrrrrrrrrrrr..." << std::endl;
	if (rand() % 2 == 0)
	{
		std::cout << this->getTarget() << " has been robotomized successfully 50";
		std::cout << " percent of the time" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " has not been robotomized successfully";
		std::cout << " so it's failure" << std::endl;
	}
}
