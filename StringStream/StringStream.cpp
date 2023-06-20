// StringStream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
	char ch;
	
}

int main() 
{
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}
