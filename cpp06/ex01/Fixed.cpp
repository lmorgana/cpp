
#include "Fixed.hpp"

Fixed::Fixed() : fr_bits(8)
{
	this->m_value = 0;
//	std::cout << "Default constructor was called" << std::endl;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : fr_bits(8)
{
	this->m_value = other.m_value;
//	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value) : fr_bits(8)
{
	m_value = roundf(value * (1 << fr_bits));
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : fr_bits(8)
{
	m_value =  roundf(value * (1 << fr_bits));
//	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	m_value = other.m_value;
//	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

Fixed& Fixed::operator++(void)
{
	m_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return (tmp);
}

Fixed& Fixed::operator--(void)
{
	m_value++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return (tmp);
}

Fixed Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool	Fixed::operator>(const Fixed &other)
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(const Fixed &other)
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=(const Fixed &other)
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==(const Fixed &other)
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(const Fixed &other)
{
	return (this->toFloat() != other.toFloat());
}

std::ostream& operator<<(std::ostream& os, const Fixed &fx)
{
	os << fx.toFloat();
	return (os);
}

int Fixed::getRawBits()
{
//	std::cout << "getRawBits member function called" << std::endl;
	(void) fr_bits;
	return (m_value);
}

void Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	m_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(m_value) / float(1 << fr_bits));
}

int		Fixed::toInt() const
{
	return (m_value / (1 << fr_bits));
}

Fixed&	Fixed::min(Fixed& one, Fixed& two)
{
	if (one < two)
		return (one);
	else
		return (two);
}

Fixed const&	Fixed::min(Fixed const& one, Fixed const& two)
{
	if (one.toFloat() < two.toFloat())
		return (one);
	else
		return (two);
}

Fixed&	Fixed::max(Fixed& one, Fixed& two)
{
	if (one > two)
		return (one);
	else
		return (two);
}

Fixed const&	Fixed::max(Fixed const& one, Fixed const& two)
{
	if (one.toFloat() > two.toFloat())
		return (one);
	else
		return (two);
}
