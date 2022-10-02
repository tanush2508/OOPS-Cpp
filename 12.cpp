#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class booths{
    unsigned int c;
    double collection;

    public:
    booths(){
        c= 0;
        collection = 0;
    }

    void paying_Vehicles(){
        c++;
        collection += 50;
    }

    void nonPaying_Vehicles(){
        c++;
    }
    void display(){
        cout<<"Total cars: "<<c<<endl;
        cout<<"Total collection: "<<collection<<endl;
    }

};

int main(){
    booths b1;
    unsigned int n;

    cout<<"Enter any choice : "<<endl;
    cout<<"\t0 - Paying Vehicle"<<endl;
    cout<<"\t1 - Non Paying Vehicle"<<endl;
    cout<<"\t2 - Exit"<<endl<<endl;
    while(n != 2){
        cout<<"Enter car type: ";
        cin>>n;
        if(!n){
           b1.paying_Vehicles();
        }
        else if(n == 1){
            
            b1.nonPaying_Vehicles();
        }
        else{
            b1.display();
            break;
        }
    }
    
    return 0;
}

