#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			const std::string name;
			bool indicatesSigned;
			const int gradeSign;
			const int gradeExecute;
			const std::string target;

	public:
			Form();
			Form(const std::string& name, const int gradeSign, const int gradeExecute,
				const std::string& target);
			Form(const Form& copy);
			~Form();

			Form& operator=(const Form& copy);

			const std::string	getName() const;
			const std::string	getTarget() const;
			bool				getIndicatesSigned() const;
			int			getGradeSign() const;
			int			getGradeExecute() const;

			void	beSigned(const Bureaucrat& bureaucrat);

			virtual void	execute(Bureaucrat const & executor) const = 0;

			class GradeTooHighException: public std::exception
			{
				virtual	const	char*	what() const throw();
			};

			class GradeTooLowException: public std::exception
			{
				virtual	const	char*	what() const throw();
			};
};

std::ostream& operator<< (std::ostream& out, const Form& Form);

#endif
