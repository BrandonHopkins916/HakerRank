// VariableArraySize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, q = 0;
	int number1, number2;
	int m, t = 0;

	cin >> n >> q;

	vector<vector<int>> vect(n);

	for (int i = 0; i < vect.size(); i++)
	{
		cin >> number1;
		vector<int>vect_0(number1);
		vect[i] = vect_0;
		for (int j = 0; j < vect_0.size(); j++)
		{
			cin >> number2;
			vect_0[j] = number2;
		}
		vect[i] = vect_0;
	}

	for (int i = 0; i < q; i++)
	{
		cin >> m >> t;
		vector<int>vector_1 = vect[m];
		cout << vector_1[n] << "\n";
	}
	return 0;
}

