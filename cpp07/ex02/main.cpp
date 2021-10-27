
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
//	Array<int> numbers(MAX_VAL);
//	int* mirror = new int[MAX_VAL];
//	srand(time(NULL));
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		const int value = rand();
//		numbers[i] = value;
//		mirror[i] = value;
//	}
//	//SCOPE
//	{
//		Array<int> tmp = numbers;
//		Array<int> test(tmp);
//	}
//
//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		if (mirror[i] != numbers[i])
//		{
//			std::cerr << "didn't save the same value!!" << std::endl;
//			return 1;
//		}
//	}
//	try
//	{
//		numbers[-2] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}
//	try
//	{
//		numbers[MAX_VAL] = 0;
//	}
//	catch(const std::exception& e)
//	{
//		std::cerr << e.what() << '\n';
//	}

//	for (int i = 0; i < MAX_VAL; i++)
//	{
//		numbers[i] = rand();
//	}
//	delete [] mirror;

	Array<std::string> array(5);

	array[0] = "null";
	array[1] = "first";
	array[2] = "second";
	array[3] = "third";
	array[4] = "fourst";

//	Array<double> array(5);
//
//	array[0] = 0.1;
//	array[1] = 1.1;
//	array[2] = 2.1;
//	array[3] = 3.1;
//	array[4] = 4.1;
//
//	Array<double> array1(array);
//
//	Array<double> array2;
//
//	array2 = array1;
//
//	array1[0] = 1111111111.1111;
//	array[0] = 00000.1111;
//
//	for (int i = 0; i < 5; i++)
//		std::cout << array2[i] << std::endl;
//	Array<int> array(6);
	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;

	return 0;
}

