#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "iostream"

class	Bureaucrat
{
private:
	const std::string	m_name;
	int					m_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &other);
	~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat const &other);
	int	getGrade(void) const;
	std::string getName(void) const;
	void	plusGrade(int grade);
	void	minusGrade(int grade);

	class	GradeTooHighException : public std::exception
	{
	public:
		const	char*	what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		const	char*	what() const throw();
	};

};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& other);

#endif