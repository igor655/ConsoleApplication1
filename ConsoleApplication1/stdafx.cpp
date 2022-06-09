#include "stdafx.h"
void foo()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

}

void printArr(const int arr[], size_t len)
{
	//arr[0] = 55;

	size_t i = 0;


	while (i < len)
	{
		std::cout << *(arr + i++) << " ";


	}
	std::cout << '\n';
}


