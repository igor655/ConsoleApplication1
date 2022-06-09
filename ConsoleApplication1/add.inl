#pragma once

#include "stdafx.h"
#include <iostream>




template<typename T>
void printResult(T result)
{
	cout << "result = " << result << endl;
}

template<typename T>
void getValue(T* v)
{
	cout << "Enter integer value: " << endl;
	
		cin >> *v;
}