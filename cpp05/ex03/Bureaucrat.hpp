#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
			const std::string name;
			int grade;
	public:
			Bureaucrat();
			Bureaucrat(const std::string& name, int grade);
			Bureaucrat(const Bureaucrat& copy);
			~Bureaucrat();

			Bureaucrat& operator=(const Bureaucrat& copy);

			const std::string	getName() const;
			int					getGrade() const;
			void				incrementGrade();
			void				decrementGrade();

			void	signForm(Form& form);
			void	executeForm(Form const & form);

			class GradeTooHighException: public std::exception
			{
				virtual	const	char*	what() const throw();
			};

			class GradeTooLowException: public std::exception
			{
				virtual	const	char*	what() const throw();
			};
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& Bureaucrat);

#endif
