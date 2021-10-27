
#include "Karen.hpp"

Karen::Karen(void)
{
	this->arr[0] = &Karen::debug;
	this->arr[1] = &Karen::info;
	this->arr[2] = &Karen::warning;
	this->arr[3] = &Karen::error;
	this->arr[4] = &Karen::empty;
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-"
				 "pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You "
				 "don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming here for years and you just started working "
				 "here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now."
				<< std::endl;
}

void	Karen::empty(void)
{

}

void	Karen::complain(std::string level)
{
	int	i;
	std::string	strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 4 && strs[i] != level)
		;
	(this->*arr[i])();
}