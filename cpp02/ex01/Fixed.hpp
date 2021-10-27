#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include "cmath"

class	Fixed
{
private:
	int			m_value;
	const	int	fr_bits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int value);
	Fixed(const float value);
	Fixed& operator=(const Fixed& copy);
	int		getRawBits();
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void)	const;
};
std::ostream&	operator<<( std::ostream &os, const Fixed &fx );

#endif
