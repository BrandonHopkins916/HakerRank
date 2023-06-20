// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;

    cin >> a >> b;

    int len1 = a.size();
    int len2 = b.size();

    cout << len1;
    cout << " ";
    cout << len2;

    cout << "\n";
    string c = a + b;
    cout << c;
    cout << "\n";
    string temp1;
    string temp2;
    temp1[0] = a[0];
    temp2[0] = b[0];

    a[0] = temp2[0];
    b[0] = temp1[0];

    cout << a;
    cout << ' ';
    cout << b;
    
    return 0;
}

