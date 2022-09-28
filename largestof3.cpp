#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // largest of three number
    int a, b, c;

    cout << "Enter three numbers ";
    cin >> a >> b >> c;

    (a > c) ? (a > b ? cout << a : cout << b) : (c>b?cout<<c:cout<<b);
    

                                                    return 0;
}