#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float conversion(float f)
{
    float c;
    c = ((f - 32) * 5) / 9;
    return c;
}

int main()
{
    float f;
    cout << "Enter temp in fahrenheit: ";
    cin >> f;
    cout << "Celcius: " << conversion(f) << endl;
    return 0;
}