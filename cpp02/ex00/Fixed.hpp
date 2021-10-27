#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
private:
	int			m_value;
	const	int	fr_bits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	int		getRawBits();
	void	setRawBits(int const raw);
};

#endif
