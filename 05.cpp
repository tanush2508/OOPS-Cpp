#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Time{
    int h, m, s;

    public:
    Time(){
        h = 0; m=0; s=0;
    }
    void set(){
        cout<<"Enter hour: ";
        cin>>h;
        cout<<"Enter minute: ";
        cin>>m;
        cout<<"Enter second: ";
        cin>>s;
    }

    void print(){
        if(s>60||h>60)
        {
            cout<<"Please remember to add less than 60 seonds and minutes..";
         
        }
        else{
        cout<<h<<"::"<<m<<"::"<<s<<endl;
    }
    }
};

int main(){
    Time t;
    
    t.set();
    t.print();
    return 0;
}