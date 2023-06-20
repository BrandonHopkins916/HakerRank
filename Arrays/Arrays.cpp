
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include "CallFunctions.h"

using namespace std;


int main() 
{
	int *ptr;
	int inputNumber = 0;
	scanf_s("%d", &inputNumber);

	inputCheck(inputNumber);

	ptr = (int*)malloc(inputNumber * sizeof(int));

	if (ptr == NULL)
	{
		cout << "Memory is not allocated, exiting applications\n";
		exit(0);
	}
	
	for (int i = 0; i < inputNumber; i++)
	{
		scanf_s("%d", &ptr[i]);
	}

	reverseArray(ptr, 0, inputNumber - 1);

	printArray(ptr, inputNumber);

	free(ptr);

	return 0;
}
