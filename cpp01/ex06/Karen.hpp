#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <map>

class	Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	empty(void);
	void	(Karen::*arr[5])();

public:
	Karen(void);
	void	complain(std::string level);
};

#endif
