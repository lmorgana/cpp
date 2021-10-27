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
	Fixed(const Fixed& other);
	Fixed(const int value);
	Fixed(const float value);
	Fixed&	operator=(const Fixed& other);
	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);
	Fixed	operator+(const Fixed& other);
	Fixed	operator-(const Fixed& other);
	Fixed	operator*(const Fixed& other);
	Fixed	operator/(const Fixed& other);
	bool	operator>(const Fixed& other);
	bool	operator<(const Fixed& other);
	bool	operator>=(const Fixed& other);
	bool	operator<=(const Fixed& other);
	bool	operator==(const Fixed& other);
	bool	operator!=(const Fixed& other);
	int		getRawBits();
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void)	const;
	static	Fixed&			min(Fixed& one, Fixed& two);
	static	Fixed const&	min(Fixed const& one, Fixed const& two);
	static	Fixed&			max(Fixed& one, Fixed& two);
	static	Fixed const&	max(Fixed const& one, Fixed const& two);
};
std::ostream&	operator<<( std::ostream &os, const Fixed &fx );

#endif
