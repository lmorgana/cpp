
#include "iter.hpp"
#include <iostream>

//void	ft_print_numb(int numb)
//{
//	std::cout << "numb: " << numb << std::endl;
//}
//
//void	ft_print_str(std::string str1)
//{
//	std::cout << "str: " << str1 << std::endl;
//}
//
//int main(void)
//{
//	int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8 , 9};
//	std::string arr_str[5] = {
//			"string 1", "string 2", "string 3", "string 4", "string 5"
//	};
//
//	iter(arr, 9, &ft_print_numb);
//	iter(arr_str, 5, &ft_print_str);
//}

class Awesome
{
public:
	Awesome(void): _n(42) {return;}
	int get(void) const {return this->_n;}

private:
	int _n;
};

std::ostream & operator << (std::ostream & o, Awesome const & rhs) {o << rhs.get(); return o;}
template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4};

	Awesome tab2[5];

	iter(tab, 5, print<int>);
	iter(tab2, 5, print<Awesome>);

	return (0);
}
