
#include "Fixed.hpp"

Fixed::Fixed() : fr_bits(8)
{
	this->m_value = 0;
	std::cout << "Default constructor was called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : fr_bits(8)
{
	this->m_value = copy.m_value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	m_value = copy.m_value;
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	(void) fr_bits;
	return (m_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	m_value = raw;
}
