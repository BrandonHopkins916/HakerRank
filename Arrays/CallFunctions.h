#pragma once

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int inputCheck(int inputNumber)
{
	if (inputNumber < 1 || inputNumber > 1001 || isdigit(inputNumber))
	{
		while (1)
		{
			cout << "Input value greater than 1000 or less than 1. Value need to be between 1 and 1000\n";
			cout << "Try again\n";
			scanf_s("%d", &inputNumber);
			return inputCheck(inputNumber);
		}
	}

	return inputNumber;
}

void reverseArray(int arr[], int first, int last)
{
	while (first >= last)
		return;
	
	int temp = arr[first];
	arr[first] = arr[last];
	arr[last] = temp;

	reverseArray( arr, first + 1, last - 1 );

}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf_s("%d ", arr[i]);
	}
}
