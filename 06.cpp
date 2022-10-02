#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex{
    int r; 
    int i;

    public:
    void input(){
        cout<<"Enter real value: ";
        cin>>r;
        cout<<"Enter imaginary value: ";
        cin>>i;
    }

    void display(){
        cout<<r<<" + "<<i<<"i"<<endl;
    }

    void operator ++(){
        r = r+1;
    }
    void operator --(){
        r = r-1;
    }

};

int main(){
    Complex c;
    c.input();
    c.display();
    ++c;
    c.display();
    --c;
    c.display();

    return 0;
}