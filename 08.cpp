#include<iostream>
using namespace std;

class calculator
{
    public:
    float first,second;
    char operation;
    int result;

    void info();
    void print();
    void operation_select();

};

void calculator::info()
{
    cout<<"enter the values of the numbers"<<endl;
    cin>>first>>second;

    cout<<"enter the operation to perform on the numbers"<<endl;
    cin>>operation;
}

void calculator:: operation_select()
{
   
    switch(operation)
    {
        case '+':
        cout<<"addition operation"<<endl;
         result = first + second;
        break;

        case '-':
        cout<<"subtraction operation"<<endl;
         result = first - second;
        break;

        case '*':
        cout<<"multiplication operation"<<endl;
         result = first * second;
        break;

        case '/':
        cout<<"division operation"<<endl;
         result = first / second;
         break;
    }   

}

void calculator::print()
{
    cout<<"the operation is"<<operation<<endl;
    cout<<"the numbers are "<<first<<"  "<<second<<endl;
    cout<<"the result is "<< result << endl;
}

int main()
{
    calculator c;
    
    c.info();
    cout<<endl;
    c.operation_select();
    c.print();
}