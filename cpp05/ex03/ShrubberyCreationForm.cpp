
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form("ShrubberyCreationForm", 145, 137)
{
	m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other) :
Form (other)
{
	m_target = other.m_target;
	m_isSigned = other.m_isSigned;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	m_target = other.m_target;
	m_isSigned = other.m_isSigned;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (m_isSigned == false)
		throw Form::GradeTooLowException("form is unsigned");
	if (m_gradeToExc < executor.getGrade())
		throw Form::GradeTooLowException("grade too low");
	else
	{
		std::ofstream	wFile;
		std::string		str1;

		wFile.open(m_target + "_shrubbery", std::ios::out);
		if (wFile.is_open())
		{
			wFile <<
			"                                                         .\n"
			"                                              .         ;  \n"
			"                 .              .              ;%     ;;   \n"
			"                   ,           ,                :;%  %;   \n"
			"                    :         ;                   :;%;'     .,   \n"
			"           ,.        %;     %;            ;        %;'    ,;\n"
			"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
			"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
			"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
			"                `%;.     ;%;     %;'         `;%%;.%;'\n"
			"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
			"                    `:%;.  :;bd%;          %;@%;'\n"
			"                      `@%:.  :;%.         ;@@%;'   \n"
			"                        `@%.  `;@%.      ;@@%;         \n"
			"                          `@%%. `@%%    ;@@%;        \n"
			"                            ;@%. :@%%  %@@%;       \n"
			"                              %@bd%%%bd%%:;     \n"
			"                                #@%%%%%:;;\n"
			"                                %@@%%%::;\n"
			"                                %@@@%(o);  . '         \n"
			"                                %@@@o%;:(.,'         \n"
			"                            `.. %@@@o%::;         \n"
			"                               `)@@@o%::;         \n"
			"                                %@@(o)::;        \n"
			"                               .%@@@@%::;         \n"
			"                               ;%@@@@%::;.          \n"
			"                              ;%@@@@%%:;;;. \n"
			"                          ...;%@@@@@%%:;;;;,..";
			wFile.close();
		}
	}
}
