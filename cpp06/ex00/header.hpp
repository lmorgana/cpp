#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <cmath>

void	print_char(char ch, float f);
void	print_int(int i, float f);
void	print_f_d(double d, float f);

bool	ft_isItChar(std::string const &str1);
bool	ft_isItInt(std::string const &str1);
bool	ft_isItFloat(std::string const &str1);
bool	ft_isItDouble(std::string const &str1);

#endif
