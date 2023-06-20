// VectorSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include "Functions.h"

using namespace std;

int main()
{
    vector<int> v;

    int n, b;
    cin >> n;

    inputCheck(n);

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v.push_back(b);
    }

    sort( v.begin(), v.end() );

    int size = v.size();

    for (int j = 0; j < size; j++)
    {
        cout << v.at(j) << " ";
    }

    return 0;
}
