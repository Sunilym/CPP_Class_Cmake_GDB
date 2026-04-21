#include<iostream>

#include "Circle.hpp"
#include"Shape.hpp"

using namespace std;

int main()
{
    Circle c(5);
    cout<<c.area()<<endl;
    cout<<c.perimeter()<<endl;

    Shape *s = new Circle(5);
    cout<<s->area()<<endl;
    cout<<s->perimeter()<<endl;
    delete s;

    return 0;
}