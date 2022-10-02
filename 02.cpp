#include <iostream>
#include <bits/stdc++.h>
using namespace std;

float gp(float bp)
{
    float da, hra;
    da = bp * 0.4;
    hra = bp * 0.2;
    return bp + da + hra;
}

int main()
{
    float bp;
    cout << "Enter BP: "<< endl;
    cin >> bp;
    cout << "Total GP: " << gp(bp) << endl;
    return 0;
}