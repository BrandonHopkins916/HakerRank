// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
	int e = std::max(a, b);
	int f = std::max(c, d);
	int g = std::max(e, f);
	return g;
}


int main() 
{
	int a, b, c, d;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}


