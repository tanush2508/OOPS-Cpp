#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a; 
    int b;

    public:
    Complex(){
        a = 0; b = 0;
    }
    void read(){
        cout<<"Enter real value: ";
        cin>>a;
        cout<<"Enter imaginary value: ";
        cin>>b;
    }

    void print(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }

    Complex operator +(Complex c){
        Complex result;
        result.a = a + c.a;
        result.b = b + c.b;
        return result;
    }
};

int main(){
    Complex first,second;
    first.read();
    second.read();
    first.print();
    second.print();

    second = second + first;
    second.print();
    
    return 0;
}