#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class patient
{
public:
    string name;
    string date_of_admission;
    string disease;
    string date_of_discharge;
};
class input_patient : public patient
{
public:
    int age;
    void read()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Date of Admission: ";
        cin >> date_of_admission;
        cout << "Enter Disease: ";
        cin >> disease;
        cout << "Enter Date of Discharge: ";
        cin >> date_of_discharge;
        cout << "Enter Age: ";
        cin >> age;
    }
    void display()
    {
        cout<<endl<<"Details of Patient: "<<endl;
        cout << "Name is " << name << endl;
        cout << "Date of Admission = " << date_of_admission << endl;
        cout << "Disease is " << disease << endl;
        cout << "Date of Discharge = " << date_of_discharge << endl;
        cout << "Age is " << age<<endl<<endl;
    }
};
int main()
{
    int a, b;
    cout << "Enter no. of patients ";
    cin >> a;
    input_patient p[a];
    for (b = 0; b < a; b++)
    {
        p[b].read();
    }
    cout << "Patients are" << endl;
    for (b = 0; b < a; b++)
    {
        p[b].display();
    }
    cout <<endl<<"Pediatric Patients are" << endl;
    for (b = 0; b < a; b++)
    {
        if (p[b].age < 12)
            p[b].display();
    }
    return 0;
}