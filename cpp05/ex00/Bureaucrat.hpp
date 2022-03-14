#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>

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

			class GradeTooHighEception: public std::exception
			{
				virtual	const	char*	what() const throw();
			};

			class GradeTooLowEception: public std::exception
			{
				virtual	const	char*	what() const throw();
			};
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& Bureaucrat);

#endif
