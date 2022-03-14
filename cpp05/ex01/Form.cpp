#include "Form.hpp"

Form::Form():name(""), indicatesSigned(false), gradeSign(0), gradeExecute(0)
{
	//needs for orthodox canonical form
}

Form::Form(const std::string& name, const int gradeSign, const int gradeExecute):
		name(name), indicatesSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& copy):name(copy.name), indicatesSigned(copy.indicatesSigned),
		gradeSign(copy.gradeSign), gradeExecute(copy.gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form& Form::operator=(const Form& copy)
{
	this->indicatesSigned = copy.indicatesSigned;;
	return (*this);
}

const std::string Form::getName() const
{
	return (this->name);
}

bool	Form::getIndicatesSigned() const
{
	return (this->indicatesSigned);
}

int	Form::getGradeSign() const
{
	return (this->gradeSign);
}

int	Form::getGradeExecute() const
{
	return (this->gradeExecute);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->gradeSign)
		this->indicatesSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low!");
}

std::ostream&	operator<<(std::ostream& out, const Form& Form)
{
	out << Form.getName() << " is ";
	if (Form.getIndicatesSigned() == true)
		out << "signed. ";
	else
		out << "not signed. ";
	out << "Form has signed by a " << Form.getGradeSign() << " grade ";
	out << "and has executed by a " << Form.getGradeExecute() << " grade.";
	return (out);
}
