#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighEception();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowEception();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy):name(copy.name), grade(copy.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighEception();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowEception();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	this->grade = copy.grade;
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int		Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighEception();
}

void	Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowEception();
}

const char*	Bureaucrat::GradeTooHighEception::what() const throw()
{
	return ("Error: Grade too high!");
}

const char*	Bureaucrat::GradeTooLowEception::what() const throw()
{
	return ("Error: Grade too low!");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& Bureaucrat)
{
	out << Bureaucrat.getName() << " bureaucrat grade " << Bureaucrat.getGrade() << ".";
	return out;
}
