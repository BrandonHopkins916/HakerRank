// VectorErase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include "Functions.h"

int main()
{
    int inputNumber, n, x, a, b;
    vector<int> v;

	cin >> inputNumber;

	inputCheck(inputNumber);

	for (int i = 0; i < inputNumber; i++)
	{
		cin >> n;
		v.push_back(n);
	}

	cin >> x;
	v.erase((v.begin() + x) - 1);

	cin >> a >> b;

	if (a > b)
	{
		cout << "Value a is bigger than b\n";
		cout << "Exiting application\n";
		exit(1);
	}
	else
	{
		v.erase( (v.begin() + a) - 1, (v.begin() + b) - 1  );
		
	}

	int size = v.size();

	cout << size;
	cout << "\n";

	for (int j = 0; j < size; j++)
	{
		cout << v.at(j) << " ";
	}
}

