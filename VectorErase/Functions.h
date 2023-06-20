#pragma once

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int inputCheck(int inputNumber)
{
	if( inputNumber > (10 ^ 6) || inputNumber < 1 || isdigit(inputNumber) )
	{
		cout << "Input value is incorrect try again\n";
		cout << inputNumber;
		inputCheck(inputNumber);
	}

	return inputNumber;
}
