// ForLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
	int i[2];
	int n;
	int j;
	for (int k = 0; k < 2; k++)
	{
		scanf_s("%d", &i[k]);
	}

	n = sizeof(i)/sizeof(int);

	for(j = 0; j < n; j++)
	{
		switch( i[j] )
		{
		case 1:
			cout << "one\n";
			break;
		case 2:
			cout << "two\n";
			break;
		case 3:
			cout << "three\n";
			break;
		case 4:
			cout << "four\n";
			break;
		case 5:
			cout << "five\n";
			break;
		case 6:
			cout << "six\n";
			break;
		case 7:
			cout << "seven\n";
			break;
		case 8:
			cout << "eight\n";
			break;
		case 9:
			cout << "nine\n";
			break;
		default:
			cout << "nine\n";
			break;
		}
	}

	for( int e = 0; e < n; e++ )
	{
		int d = i[e];
		if (d > 9) 
		{
			if (d % 2 == 0)
				cout << "even\n";
			else
				cout << "odd\n";
		}
	}

	return 0;
}