#include<iostream>
using namespace std;
#include "Circle.hpp"
#include <cmath>

Circle ::Circle(double r)
{
    this->r = r;
}

double Circle ::area()
{
    return 3.14 * r * r;

}

double Circle :: perimeter()
{
    return 2 * 3.14 * r;
}

Circle :: ~Circle()
{
    cout<<"Circle destructor called"<<endl;
}