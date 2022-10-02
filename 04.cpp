#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;
    string reg_no;
    string branch;
    int sem;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Reg. no.: ";
        cin >> reg_no;
        cout << "Enter Branch: ";
        cin >> branch;
        cout << "Enter sem: ";
        cin >> sem;
        // display();
    }

    void print()
    {
        cout << endl
             << "Name = " << name << endl;
        cout << "Reg.no. = " << reg_no << endl;
        cout << "Branch = " << branch << endl;
        cout << "Semester = " << sem << endl;
    }
};

int main()
{
    student t;
    t.input();
    t.print();
    return 0;
}