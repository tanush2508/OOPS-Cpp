#include <iostream>
using namespace std;

class Shape
{
public:
    double h, b;
    double result;

    Shape();

    void read()
    {
        cout << "Enter the two dimensions: " << endl;
        cin >> h >> b;
    }
    
};

Shape::Shape()
{
    this->h = 0;
    this->b = 0;
}

class Triangle : public Shape
{
public:
    void display()
    {
        
        cout << "\nArea of Triangle = " << (h * b) / 2<<endl<<"for rectangle: "<<endl;
    }
};

class Rectangle : public Shape
{
      public:
      void calculate();

};

void Rectangle::calculate()
{
    result = h * b;
    cout<<"the area of rectangle is "<<result;
}


int main()
{

    Triangle t;
    Rectangle r;

    t.read();
    t.display();

    r.read();
    r.calculate();
}