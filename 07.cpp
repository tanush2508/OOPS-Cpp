#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    string reg_no;
    int age;
    string gender;
    string branch;
    int sem;

    void input(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Reg.No: ";
        cin>>reg_no;
        cout<<"Enter Age: ";
        cin>>age;
        cout<<"Enter Gender: ";
        cin>>gender;
        cout<<"Enter Branch: ";
        cin>>branch;
        cout<<"Enter Semester: ";
        cin>>sem;
    }

    void print(){
        cout<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Reg.No. = "<<reg_no<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Branch = "<<branch<<endl;
        cout<<"Semester = "<<sem<<endl;
    }
};

class studentResultInfo: public student{
    float marks;
    float percent;
    char grade;

    public:
    studentResultInfo(student n){
        name = n.name;
        reg_no = n.reg_no;
        age = n.age;
        gender = n.gender;
        branch = n.branch;
        sem = n.sem;
    }

    void input(){
        cout<<"Enter total marks out of 500: ";
        cin>>marks;
        percent = marks/5;
        if(percent > 90){
            grade = 'A';
        }
        else if(percent > 80){
            grade = 'B';
        }
        else if(percent > 70){
            grade = 'C';
        }
        else{grade = 'D';}
    }

    void print(){
        cout<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Reg.no. = "<<reg_no<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Branch = "<<branch<<endl;
        cout<<"Semester = "<<sem<<endl;
        cout<<"Marks = "<<marks<<endl;
        cout<<"Percentage = "<<percent<<endl;
        cout<<"Grade = "<<grade<<endl;
    }
};

int main(){
    student n;
    n.input();
    n.print();

    studentResultInfo st(n);
    st.input();
    st.print();
    return 0;
}