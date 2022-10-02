#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class area
{
public:
    float select(int i)
    {
        switch (i)
        {
        case 1:
            return circle();
            break;
        case 2:
            return rectangle();
            break;
        case 3:
            return triangle();
            break;
        }
        return 0;
    }

    float circle()
    {
        int r;
        cout << "Enter radius: ";
        cin >> r;
        return (3.14) * r * r;
    }

    float rectangle()
    {
        int l, b;
        cout << "Enter Length: ";
        cin >> l;
        cout << "Enter Breadth: ";
        cin >> b;
        return l * b;
    }

    float triangle()
    {
        int h, b;
        cout << "Enter Height: ";
        cin >> h;
        cout << "Enter Base: ";
        cin >> b;
        return (h*b)/2;
    }
};

int main()
{
    int c;
    cout << "Enter:" << endl;
    cout << "\t1 - Area of Circle" << endl;
    cout << "\t2 - Area of Rectangle" << endl;
    cout << "\t3 - Area of Triangle" << endl;
         
    cin >> c;
    area a;
    // int Area =
    cout << "Area = " << a.select(c) << endl;

    return 0;
}