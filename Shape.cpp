#include<iostream>
using namespace std;

#include "Shape.hpp"

double Shape :: area()
{
    cout<<"Area of shape"<<endl;
    return 0;
}


double Shape :: perimeter()
{
    cout<<"Perimeter of shape"<<endl;
    return 0;
}

Shape::~Shape()
{
    cout<<"Shape destructor called"<<endl;
}