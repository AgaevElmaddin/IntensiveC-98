#include "ShrubberyCreationForm.hpp"
#include <fstream> // for file

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
	Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	(void)copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	(void)copy;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIndicatesSigned() == false)
		throw "The form is not signed";
	else if (executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();

	std::ofstream fout;
	std::string path = this->getTarget() + "_shrubbery";

	fout.open(path);
	if (!fout.is_open())
	{
		std::cerr << "Error: cannot open " << path << std::endl;
		exit(1);
	}
	else
	{
		fout << "   _\\/_" << std::endl;
		fout << "    /\\" << std::endl;
		fout << "    /\\" << std::endl;
		fout << "   /  \\" << std::endl;
		fout << "   /~~\\o" << std::endl;
		fout << "  /o   \\" << std::endl;
		fout << " /~~*~~~\\" << std::endl;
		fout << " o/   o \\" << std::endl;
		fout << "/~~~~~~~~\\~`"<< std::endl;
		fout << "/__*______\\" << std::endl;
		fout << "    ||" << std::endl;
		fout << "  \\====/" << std::endl;
		fout << "   \\__/" << std::endl;
	}
	fout.close();
}
